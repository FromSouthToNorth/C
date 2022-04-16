#include <stdio.h>
//
// Created by 黄煜 on 2022/4/16.
//
int main()
{
    int num;
    char c;
    float f;
    double d;

    num = 520;
    c = 'A';
    f = 3.14;
    d = 3.141592653;

    printf("%d\n", num);
    printf("%c\n", c);
    printf("%.2f\n", f);
    printf("%11.9f\n", d);

    return 0;
}
