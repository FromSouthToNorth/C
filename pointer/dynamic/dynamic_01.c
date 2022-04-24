//
// Created by bw on 2022/4/22.
//
#include <stdio.h>
#include <malloc.h>

void f(int *q);

int main() {

    int *pInt = (int *) malloc(4);
    *pInt = 10;

    printf("%d \n", *pInt);
    printf("%p \n", pInt);
    printf("%llu \n", sizeof pInt); // 8

    f(pInt);
    printf("%d \n", *pInt); // 200
    free(pInt);
//    printf("%d \n", *pInt);

    return 0;
}

void f(int *q) {
    *q = 200;
//    free(pInt);
}