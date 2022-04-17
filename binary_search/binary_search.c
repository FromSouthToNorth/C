//
// Created by 黄煜 on 2022/4/16.
//

#include <stdio.h>

int binary_search(const int nums[], int n, int target) {

    int left = 0, right = n;
    printf("%d \n", n);

    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (nums[middle] == target) {
            return middle;
        }
        else if (nums[middle] > target) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }
    return -1;
}

int main() {
    int nums[] = {1,2,3,4, 6 };
    printf("int is size: %lu \n", sizeof(int));
    int target = 4;
    int n = (sizeof(nums) >> 2) - 1;
    int ans = binary_search(nums, n, target);
    printf("target index: %d", ans);
    return 0;
}