#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int c = 2;
    int today = c;
    while (--n) {
        today =  (today * 3) / 2;
        c += today;
    }
    printf("%d", c);
    return 0;
}
