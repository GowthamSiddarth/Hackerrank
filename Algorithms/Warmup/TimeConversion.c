#include <stdio.h>

int cmprstrs(char *s1, char *s2) {
    int i = 0;
    while ('\0' != s1[i] && '\0' != s2[i] && s1[i] == s2[i]) {
        i++;
    }
    return s1[i] - s2[i];
}

int main() {
    int hrs, mins, secs;
    char dur[3];
    scanf("%d:%d:%d%s", &hrs, &mins, &secs, dur);
    if (0 == cmprstrs(dur, "AM")) {
        printf("%0.2d:%0.2d:%0.2d", hrs % 12, mins, secs);
    } else {
        printf("%d:%0.2d:%0.2d", 12 + hrs % 12, mins, secs);
    }
    return 0;
}
