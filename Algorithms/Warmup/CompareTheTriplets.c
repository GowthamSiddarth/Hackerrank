#include <stdio.h>

int main() {
    int a0;
    int a1;
    int a2;
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0;
    int b1;
    int b2;
    scanf("%d %d %d",&b0,&b1,&b2);
    int score_a = 0;
    int score_b = 0;
    if (a0 > b0) {
        score_a++;
    } else if (a0 < b0) {
        score_b++;
    }
    if (a1 > b1) {
        score_a++;
    } else if (a1 < b1) {
        score_b++;
    }
    if (a2 > b2) {
        score_a++;
    } else if (a2 < b2) {
        score_b++;
    }
    printf("%d %d", score_a, score_b);
    return 0;
}
