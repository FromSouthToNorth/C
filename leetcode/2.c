//
// Created by bw on 2022/4/27.
//

#include <stdio.h>
#include <malloc.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;

    int carry = 0;

    while (l1 != NULL || l2 != NULL) {
        int num1 = l1 != NULL ? l1->val : 0;
        int num2 = l2 != NULL ? l2->val : 0;
        int sum = num1 + num2 + carry;
        if (head == NULL) {
            head = tail = malloc(sizeof(struct ListNode));
            tail->val = sum % 10;
            tail->next = NULL;
        }
        else {
            tail->next = malloc(sizeof(struct ListNode));
            tail->next->val = sum % 10;
            tail = tail->next;
            tail->next = NULL;
        }
        carry = sum / 10;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    if (carry > 0) {
        tail->next = malloc(sizeof(struct ListNode));
        tail->next->val = carry;
        tail->next->next = NULL;
    }

    return head;
}


int main() {
    struct ListNode *l1 = malloc(sizeof(struct ListNode));
    l1->val = 8;
    l1->next = malloc(sizeof(struct ListNode));
    l1->next->val = 3;
    l1->next->next = malloc(sizeof(struct ListNode));
    l1->next->next->val = 7;
    l1->next->next->next = NULL;

    struct ListNode *l2 = malloc(sizeof(struct ListNode));
    l2->val = 1;
    l2->next = malloc(sizeof(struct ListNode));
    l2->next->val = 6;
    l2->next->next = malloc(sizeof(struct ListNode));
    l2->next->next->val = 5;
    l2->next->next->next = NULL;
    struct ListNode *ans = addTwoNumbers(l1, l2);

    while (ans) {
        printf("%d ", ans->val);
        ans = ans->next;
    }
    return 0;
}
