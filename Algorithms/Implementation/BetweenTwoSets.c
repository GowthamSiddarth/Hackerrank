#include <stdio.h>

int gcd2nums(int p,  int q) {
    if (0 == p) {
        return q;
    }
    return gcd2nums(q % p, p);
}

int gcdnnums(int *arr, int n) {
    int gcd = arr[0];
    for (int i = 1; i < n; i++) {
        gcd = gcd2nums(arr[i], gcd);
    }
    return gcd;
}

int lcm2nums(int p, int q) {
    return (p * q) / gcd2nums(p, q);
}

int lcmnnums(int *arr, int n) {
    int lcm = arr[0];
    for (int i = 1; i < n; i++) {
        lcm = lcm2nums(arr[i], lcm);
    }
    return lcm;
}

int main() {
    int n; 
    int m; 
    scanf("%d %d", &n, &m);
    int a[n];
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d", &a[a_i]);
    }
    int b[m];
    for(int b_i = 0; b_i < m; b_i++){
       scanf("%d", &b[b_i]);
    }
    int x = lcmnnums(a, n);
    int y = gcdnnums(b, m);
    int count = 0;    
    for (int i = x, j = 2; i <= y; i = x * j, j++) {
        if (0 == (y % i)) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
