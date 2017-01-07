#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, flag1 = 0, flag2 = 0;
        scanf("%d %d", &a, &b);
        int c = (int) sqrt(a);
        int d = (int) sqrt(b);
        if (c * c < a) {
            c++;
            flag1++;
        }
        if (d * d < b) {
            d++;
            flag2++;
        }
        if (0 == flag1 && 0 == flag2) {
            printf("%d\n", d - c + 1);
        } else if (0 == flag1 && 1 == flag2) {
            printf("%d\n", d - c);
        } else if (1 == flag1 && 0 == flag2) {
            printf("%d\n", d - c + 1);
        } else if (1 == flag1 && 1 == flag2) {
            printf("%d\n", d - c);
        }
    }
    return 0;
}
