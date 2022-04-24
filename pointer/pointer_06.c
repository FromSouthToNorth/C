//
// Created by bw on 2022/4/22.
//

#include <stdio.h>


void f(int *num);

int main() {

    int num = 10;
    int *p = &num;
    int **q = &p;
    int ***r = &q;
    f(&num);
    return 0;
}

void f(int *num) {

}
