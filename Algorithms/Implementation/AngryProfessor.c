#include <stdio.h>

int isCancelled(int *a, int n, int k) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= 0) {
            c++;
        }
    }
    return c < k;
}

int main() {
    int t; 
    scanf("%d", &t);
    for (int a0 = 0; a0 < t; a0++) {
        int n; 
        int k; 
        scanf("%d %d",&n,&k);
        int a[n];
        for (int a_i = 0; a_i < n; a_i++) {
           scanf("%d", &a[a_i]);
        }
        int res = isCancelled(a, n, k);
        if (res) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
