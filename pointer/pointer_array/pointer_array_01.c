//
// Created by bw on 2022/4/20.
//
#include <stdio.h>

int main() {

    int nums[5];        // a[0] ~ a[4]
    int numsDb[5][2];   // a[0][0] ~ a[4][1]

    int nums_length = sizeof nums / sizeof(int) - 1;
    int i;
    for (i = 0; i < nums_length; i++) {
        printf("%#x \n", &nums[i]);
    }

    return 0;

}
