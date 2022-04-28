//
// Created by bw on 2022/4/27.
//

#include <stdio.h>
#include <malloc.h>

void fun(int **pInt);

int main() {
    int *p;
    fun(&p);
    return 0;
}

void fun(int **pInt) {
    *pInt = (int *)malloc(sizeof(int));
}