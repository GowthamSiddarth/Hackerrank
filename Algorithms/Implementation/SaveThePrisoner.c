#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long int n, m, s;
        scanf("%ld %ld %ld", &n, &m, &s);
        int r = (s + m - 1) % n;
        if (0 == r) {
            printf("%ld\n", n);
        } else {
            printf("%d\n", r);
        }
    }
    return 0;
}
