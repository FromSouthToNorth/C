//
// Created by bw on 2022/4/18.
//

#include <stdio.h>

int main() {
    int var_runoob = 10;
    int *p;
    p = &var_runoob;

    printf("var_runoob 变量地址： %p \n", p);
    return 0;
}