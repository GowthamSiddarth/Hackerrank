#include <stdio.h>

int array_sum(int *arr, int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
         sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int arr_i = 0; arr_i < n; arr_i++){
        scanf("%d",&arr[arr_i]);
    }
    int sum = array_sum(arr, n);
    printf("%d", sum);
    return 0;
}

