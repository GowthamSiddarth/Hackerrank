#include <stdio.h>
#include <malloc.h>

int numOfPairs(int *arr, int n, int k) {
    int *rem = (int *)calloc(k, sizeof(int));
    for (int i = 0; i < n; i++) {
        rem[arr[i] % k]++;
    }
    int pairs = (rem[0] * (rem[0] - 1)) / 2;
    for (int i = 1; i <= k / 2 && i < k - i; i++) {
        pairs += rem[i] * rem[k - i];
    }
    if (0 == k % 2) {
        pairs += (rem[k / 2] * (rem[k / 2] - 1)) / 2;
    }
    return pairs;
}

int main() {
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int a[n];
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%d", &a[a_i]);
    }
    int pairs = numOfPairs(a, n, k);
    printf("%d", pairs);
    return 0;
}

