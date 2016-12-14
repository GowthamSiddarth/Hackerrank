#include <stdio.h>

long int array_sum(long int *arr, int len) {
    long int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    scanf("%d",&n);
    long int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    long int sum = array_sum(arr, n);
    printf("%ld", sum);
    return 0;
}

