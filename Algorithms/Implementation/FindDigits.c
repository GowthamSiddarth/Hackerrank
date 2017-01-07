#include <stdio.h>

int getNumberOfEvenlyDividingDigits(int n) {
    int copy = n;
    int count = 0;
    while (copy) {
        int digit = copy % 10;
        if (digit && 0 == (n % digit)) {
            count++;
        }
        copy /= 10;
    }
    return count;
}

int main() {
    int t; 
    scanf("%d", &t);
    for (int a0 = 0; a0 < t; a0++) {
        int n; 
        scanf("%d",&n);
        int res = getNumberOfEvenlyDividingDigits(n);
        printf("%d\n", res);
    }
    return 0;
}
