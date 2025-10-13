/*Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int sp = 0, dig = 0, spec = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ')
            sp++;
        else if (s[i] >= '0' && s[i] <= '9')
            dig++;
        else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            continue;
        else
            spec++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", sp, dig, spec);
    return 0;
}
