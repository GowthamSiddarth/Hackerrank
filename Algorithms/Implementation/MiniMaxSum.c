#include <stdio.h>

void findMinMax(long int *nums, long int *min, long int *max) {
    for (int i = 1; i < 5; i++) {
        if (nums[i] < *min) {
            *min = nums[i];
        }
        if (nums[i] > *max) {
            *max = nums[i];
        }
    }
    return;
}

int main() {
    long int nums[5], min, max, sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%ld", &nums[i]);
        sum += nums[i];
    }
    min = max = nums[0];
    findMinMax(nums, &min, &max);
    printf("%ld %ld", sum - max, sum - min);
    return 0;
}

