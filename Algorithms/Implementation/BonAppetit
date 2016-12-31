#include <stdio.h>

int justifyShare(int *nums, int n, int k, int b) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i != k) {
            sum += nums[i];
        }
    }
    return b - sum / 2;
}

int main() {
    int n, k, b;
    scanf("%d %d", &n, &k);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &b);
    int res = justifyShare(nums, n, k, b);
    if (0 == res) {
        printf("Bon Appetit");
    } else {
        printf("%d", res);
    }
    return 0;
}
