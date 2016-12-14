#include <stdio.h>

void printStairCase(int n) {
    for (int i = 1; i <= n; i++) {
        int j;
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        while (j < n) {
            printf("#");
            j++;
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d",&n);
    printStairCase(n);
    return 0;
}

