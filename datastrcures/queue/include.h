//
// Created by bw on 2022/4/25.
//
#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node *next;
    struct node *pre;
} *head, *tail, *tmp;

void create();
void add(int val);
int deque();
int peek();
int size();
int isEmpty();