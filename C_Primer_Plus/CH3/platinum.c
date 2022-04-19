//
// Created by bw on 2022/4/19.
//
#include <stdio.h>

int main() {
    float weight; /* 体重 */
    float value;  /* 相等总量的白金价值 */

    printf("Are you worth your weight in platinum ? \n");
    printf("Let's check it out. \n");
    printf("Please enter your weight in pounds: ");

    /* 获取用户的输入 */
    scanf("%f", &weight);
    /* 假设白金的价格是 $ 1700 */
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f. \n", value);
    printf("You are easily worth that! If platinum prices drop, \n");
    printf("eat more to maintain your value. \n");

    return 0;
}

