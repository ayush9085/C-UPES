/*Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    // Input string
    scanf("%s", str);

    // Input character
    scanf(" %c", &ch); // Notice the space before %c to skip newline/whitespace

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Output
    printf("%d\n", count);

    return 0;
}
