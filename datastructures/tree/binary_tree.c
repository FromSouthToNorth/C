//
// Created by bw on 2022/5/6.
//

#include <stdio.h>
#include <stdlib.h>

/**
 * 树节点
 */
typedef struct node {
    struct node *left;
    struct node *right;
    int val;
} node;

struct node *newNode(int val) {
    struct node *t = (node *) malloc(sizeof(node));
    t->left = NULL;
    t->right = NULL;
    t->val = val;
    return t;
}

node *insert(node *root, int val) {
    if (root == NULL) {
        root = newNode(val);
    }
    else if (val > root->val) {
        root->right = insert(root->right, val);
    }
    else if (val < root->val) {
        root->left = insert(root->left, val);
    }
    return root;
}

node *max(node *root) {
    if (root->right != NULL) {
        return max(root->right);
    }
    return root;
}

node *del(node *root, int val) {
    if (root == NULL) {
        return root;
    }
    else if (val > root->val) {
        root->right = del(root->right, val);
    }
    else if (val < root->val) {
        root->left = del(root->left, val);
    }
    else if (val == root->val) {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        else if (root->left == NULL) {
            node *t = root;
            root = root->right;
            free(t);
            return root;
        }
        else if (root->right == NULL) {
            node *t = root;
            root = root->left;
            free(t);
            return root;
        }
        else {
            node *t = max(root->left);
            root->val = t->val;
            root->left = del(root->left, t->val);
        }
    }
    return root;
}

int height(node *root) {
    if (root == NULL) {
        return 0;
    }
    else {
        int right_h = height(root->right);
        int left_h = height(root->left);
        if (right_h > left_h) {
            return (right_h + 1);
        }
        else {
            return (left_h + 1);
        }
    }
}

int select(node *root,int val) {
    if (root == NULL) {
        return 0;
    }
    else if (val > root->val) {
        return select(root->right, val);
    }
    else if (val < root->val) {
        return select(root->left, val);
    }
    else if (val == root->val) {
        return 1;
    }
    else {
        return 0;
    }
}

void inOrder(node *root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("\t[ %d ]\t", root->val);
        inOrder(root->right);
    }
}

void purge(node *root) {
    if (root != NULL) {
        if (root->left != NULL) {
            purge(root->left);
        }
        if (root->right != NULL) {
            purge(root->right);
        }
        free(root);
        root = NULL;
    }
}

