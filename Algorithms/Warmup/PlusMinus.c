#include <stdio.h>

void summary(int *arr, int len, double* pos_count, double* neg_count, double* zero_count) {
    int pos_c = 0;
    int neg_c = 0;
    int zero_c = 0;
    for(int i = 0; i < len; i++) {
        if (arr[i] > 0) {
            pos_c++;
        } else if (arr[i] < 0) {
            neg_c++;
        } else {
            zero_c++;
        }
    }
    *pos_count = ((double) pos_c) / len;
    *neg_count = ((double) neg_c) / len;
    *zero_count = ((double) zero_c) / len;
    return;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    double pos_fraction, neg_fraction, zero_fraction;
    summary(arr, n, &pos_fraction, &neg_fraction, &zero_fraction);
    printf("%g\n%g\n%g", pos_fraction, neg_fraction, zero_fraction);
    return 0;
}

