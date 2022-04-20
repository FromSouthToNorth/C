//
// Created by bw on 2022/4/20.
//
#include <stdio.h>

void selection_sort (int* nums, int numsSize);

void swap(int* nums, int i, int j);

int main() {
    int nums[6] = {3, 6,1,10,9,22};
    selection_sort(nums, 6);

    for (int i = 0; i < 6; ++i) {
        printf("%d \t", nums[i]);
    }
    return 0;
}

void selection_sort (int* nums, int numsSize) {
    int i, j;
    for (i = 0; i < numsSize; ++i) {
        int min = i;
        for (j = i + 1; j < numsSize; ++j) {
            if (nums[j] < nums[min]) min = j;
        }
        swap(nums, i, min);
    }
}

void swap(int* nums, int i, int j) {
    int t = nums[i];
    nums[i] = nums[j];
    nums[j] = t;
}