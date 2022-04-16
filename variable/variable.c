#include <stdio.h>
//
// Created by 黄煜 on 2022/4/16.
//
#define URL "www.hyzt.vip"
#define NAME "Hy"
#define NUM 1234
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

    printf("%d \n", num);
    printf("%c \n", c);
    printf("%.2f \n", f);
    printf("%11.9f \n", d);

    printf("=== #define === \n");

    printf("%s \n", URL);
    printf("%s \n", NAME);
    printf("%d \n", NUM);

    char str[2] = "12";

    printf("array %s \n", str);

    printf("=== sizeof === \n");
    printf("size of int is %lu \n", sizeof(int));
    printf("size of str is %lu \n", sizeof(str));
    printf("size of double is %lu \n", sizeof(double));

    return 0;
}
