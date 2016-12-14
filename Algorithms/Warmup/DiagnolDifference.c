#include <stdio.h>

int absDiffDiagnols(int *a, int order) {
    int princDiagSum = 0;
    int otherDiagSum = 0;
    for (int i = 0; i < order; i++) {
        princDiagSum += *(a + i * order + i);
        otherDiagSum += *(a + i * order + (order - 1 - i));
    }
    return (princDiagSum > otherDiagSum) ? princDiagSum - otherDiagSum : otherDiagSum - princDiagSum;
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n * n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          scanf("%d", (a + a_i * n + a_j));
       }
    }
    int diff = absDiffDiagnols(a, n);
    printf("%d", diff);
    return 0;
}

