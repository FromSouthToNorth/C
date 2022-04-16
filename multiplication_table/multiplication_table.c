//
// Created by 黄煜 on 2022/4/16.
//

#include <stdio.h>

int main () {

    int row = 9, i, j;

    for (i = 1; i <= row; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d * %d = %d \t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;

}