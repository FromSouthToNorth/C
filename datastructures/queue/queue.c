//
// Created by bw on 2022/4/25.
//

#include "include.h"
int main() {
    return 0;
}
void create() {
    head = NULL;
    tail = NULL;
}
/**
 * 向队列中添加一个元素
 * @param val 添加的元素
 */
void add(int val) {
    if (head == NULL) {
        head = (struct node *) malloc(sizeof(struct node));
        head->val = val;
        head->pre = NULL;
        tail = head;
    }
    else {
        tmp = (struct node *) malloc(sizeof(struct node));
        tmp->val = val;
        tmp->next = tail;
        tail = tmp;
    }
}
/**
 * 取出队列当中的值
 */
int deque() {
    int ans;
    if (head == NULL) {
        printf("ERROR: Deque from empty queue. \n");
        exit(1);
    }
    else {
        ans = head -> val;
        if (head->pre == NULL) head = NULL;
        else head = head->pre;
        head->next = NULL;
    }
    return ans;
}
