//
// Created by 黄煜 on 2022/4/16.
//

#include <stdio.h>

int binary_search(int *nums, int n, int target);

int main() {
    int nums[5] = {1, 2, 3, 4, 6};
    int target = 4;
    int ans = binary_search(nums, 5, target);
    printf("target index: %d", ans);
    return 0;
}

int binary_search(int *nums, int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        int middleNum = nums[middle];
        if (target == middleNum) {
            return middleNum;
        } else if (middleNum > target) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    return -1;
}