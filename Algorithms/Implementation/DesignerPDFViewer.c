#include <stdio.h>

int main() {
    int alpha[26], i;
    for (i = 0; i < 26; i++) {
        scanf("%d ", &alpha[i]);
    }
    char word[11];
    scanf("%s", word);
    int len = -1;
    for (i = 0; '\0' != word[i]; i++) {
        if (len < alpha[word[i] - 'a']) {
            len = alpha[word[i] - 'a'];
        }
    }
    printf("%d", len * i);
    return 0;
}
