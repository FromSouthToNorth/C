#include <stdio.h>

//
// Created by 黄煜 on 2022/4/16.
//
int main () {

    int ch;

    for (ch  = 75; ch <= 100; ch++) {
        printf("ASCII 值 = %d, 字符 = %c\n", ch, ch);
    }

    char c = 'A';
    char str[20] = "www.hyzt.vip";
    float flt = 10.234;
    int num = 150;
    double dbl = 20.123456789;
    printf("字符为 %c \n", c);
    printf("字符串为 %s \n", str);
    printf("浮点数为：%f \n", flt);
    printf("整数为：%d \n", num);
    printf("双精度浮点数为：%lf \n", flt);
    printf("八进制值为：%o \n", num);
    printf("十六进制值为：%x \n", num);

    return 0;

}

