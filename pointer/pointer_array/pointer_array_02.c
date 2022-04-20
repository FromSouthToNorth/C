//
// Created by bw on 2022/4/20.
//

#include <stdio.h>

void fun(int* nums, int numsSize);

int main() {

    int nums[6] = {0, 1, 2, 3, 4 };

    fun(nums, sizeof nums / sizeof(int));

    printf("%d", nums[3]);

    return 0;

}

void fun(int* nums, int numsSize) {

    int i;
    for (i = 0; i < numsSize; ++i) {
        printf("%d ", nums[i]);
    }
    printf("\n");

}