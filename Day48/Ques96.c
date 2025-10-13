#include <stdio.h>
#include <string.h>

void rev(char s[], int st, int en) {
    while (st < en) {
        char t = s[st];
        s[st] = s[en];
        s[en] = t;
        st++;
        en--;
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int start = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            rev(str, start, i - 1);
            start = i + 1;
        }
    }
    rev(str, start, strlen(str) - 1);

    printf("%s\n", str);

    return 0;
}
