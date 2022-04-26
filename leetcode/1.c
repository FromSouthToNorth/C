//
// Created by bw on 2022/4/26.
//

#include <stdio.h>
#include <malloc.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize);

int main() {
    int nums[] = {1, 2, 9, 2};
    int target = 4;
    int p;
    int *ans = twoSum(nums, 4, target, &p);
    if (p > 0) {
        printf("%d \n", ans[0]);
        printf("%d \n", ans[1]);
    } else {
        printf("未找到目标值和的两数下标 \n");
    }
    return 0;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    int i, j;
    for (i = 0; i < numsSize; ++i) {
        for (j = i + 1; j < numsSize; ++j) {
            if (target == (nums[i] + nums[j])) {
                int *ans = (int *) malloc(sizeof(int) * 2);
                ans[0] = i, ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
