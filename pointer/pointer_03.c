//
// Created by bw on 2022/4/19.
//
#include <stdio.h>

void exchange(int *, int *);

int main() {

    int num1 = 4, num2 = 6;
//    int * p1 = &num1,  * p2 = &num2;
    exchange(&num1, &num2);
    printf("num1: %d, num2: %d", num1, num2);
    return 0;

}

void exchange(int *num1, int *num2) {

    int t;
    t = *num1;         // * num1 表示地址的变量值
    *num1 = *num2;     // * num2 地址的变量值重新赋值给 * num1 地址的变量值
    *num2 = t;         // * num2 地址的变量值重新赋值给 * num1 地址的变量值

}
