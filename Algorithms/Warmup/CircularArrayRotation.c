#include <stdio.h>

void rightRotations(int *a, int n, int k) {
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = a[i];
    }
    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
    }
    return;
}

int main() {
    int n;
    int k;
    int q;
    scanf("%d %d %d",&n,&k,&q);
    int a[n];
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d", &a[a_i]);
    }
    rightRotations(a, n, k);
    for(int a0 = 0; a0 < q; a0++){
        int m;
        scanf("%d",&m);
        printf("%d\n", a[m]);
    }
    return 0;
}
