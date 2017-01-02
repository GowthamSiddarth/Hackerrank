#include <stdio.h>

int getHeight(int n) {
    int a = 1, flag = 1;
    while(n--) {
        if (flag) {
            a *= 2;
            flag = 0;
        } else {
            a += 1;
            flag = 1;
        }        
    }
    return a;
}

int main() {
    int t; 
    scanf("%d", &t);
    for (int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d", &n);
        int res = getHeight(n);
        printf("%d\n", res);
    }
    return 0;
}
