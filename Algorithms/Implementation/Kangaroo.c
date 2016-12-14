#include <stdio.h>

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    int a = x2 - x1;
    int b = v1 - v2;
    if (b > 0 && 0 == (a % b)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
