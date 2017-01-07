#include <stdio.h>

int getRemainingEnergy(int *c, int n, int k) {
    int e = 100;
    int i = 0;
    do {
        i = (i + k) % n;
        if (0 == c[i]) {
            e--;
        } else {
            e -= 3;
        }
    } while (0 != i);
    return e;
}

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int c[n];
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d", &c[c_i]);
    }
    int res = getRemainingEnergy(c, n, k);
    printf("%d", res);
    return 0;
}
