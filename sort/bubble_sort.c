//
// Created by bw on 2022/4/20.
//
#include <stdio.h>

void bubble_sort (int* nums, int numsSize);

void swap(int* nums, int i, int j);

int main() {
    int nums[8] = {8,2,1,4,3,8,5,7};
    bubble_sort(nums, 8);
    int i;
    for (i = 0; i < 8; ++i) {
        printf("%d \t", nums[i]);
    }
    return 0;
}

/**
 * [8,2,1,4,3,8,5,7]
 *
 * @param nums
 * @param numsSize
 */
void bubble_sort (int* nums ,int numsSize)  {
    int i, j;
    for (i = 0; i < numsSize - 1; ++i) {
        for (j = 0; j < numsSize - 1 - i; ++j) {
            if (nums[j] > nums[j + 1]) {
                swap(nums, j, j + 1);
            }
        }
    }
}

void swap(int* nums, int i, int j) {
    int t = nums[i];
    nums[i] = nums[j];
    nums[j] = t;
}
