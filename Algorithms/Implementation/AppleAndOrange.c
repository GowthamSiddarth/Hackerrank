#include <stdio.h>

int main(){
    int s;
    int t;
    scanf("%d %d",&s,&t);
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int m;
    int n;
    scanf("%d %d",&m,&n);
    int apple[m];
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int orange[n];
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    int numOfApples = 0;
    int numOfOranges = 0;
    for (int i = 0; i < m; i++){
        if ((a + apple[i]) >= s && (a + apple[i]) <= t) {
            numOfApples++;
        }
    }
    for (int i = 0; i < n; i++){
        if ((b + orange[i]) >= s && (b + orange[i]) <= t) {
            numOfOranges++;
        }
    }
    printf("%d\n%d", numOfApples, numOfOranges);
    return 0;
}

