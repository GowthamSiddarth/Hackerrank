#include <stdio.h>

int getNumberOfPairs(int *nums, int n) {
    int counts[100] = {0}, numOfPairs = 0;
    for (int i = 0; i < n; i++) {
        counts[nums[i] - 1]++;
    }
    for (int i = 0; i < 100; i++) {
        if (counts[i] > 1) {
            numOfPairs += counts[i] / 2;
        }
    }
    return numOfPairs;
}

int main() {
    int n; 
    scanf("%d", &n);
    int c[n];
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d", &c[c_i]);
    }
    int res = getNumberOfPairs(c, n);
    printf("%d", res);
    return 0;
}
