//
// Created by bw on 2022/4/25.
//

#include <stdio.h>
#include <stdlib.h>

void f(int **q) {
    *q = (int *)malloc(sizeof(int));
    **q = 5;
}

int main() {
    int *p;
    f(&p);
    printf("%d \n", *p);
    return 0;
}