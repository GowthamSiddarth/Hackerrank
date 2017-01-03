#include <stdio.h>

int _abs_(int a) {
    return (a >= 0 ? a : -a);
}

long int reverse(int a) {
    int sum = 0;
    while(a) {
        sum = sum * 10 + a % 10;
        a /= 10;
    }
    return sum;
}

int main() {
    int i, j, k, c = 0;
    scanf("%d %d %d", &i, &j, &k);
    for (int a = i; a <= j; a++) {
        if (0 == _abs_(a - reverse(a)) % k) {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}
