/*Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // for lowercase alphabets
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        int idx = str[i] - 'a';
        freq[idx]++;
        if(freq[idx] == 2) {   // first time it repeats
            printf("Output: %c\n", str[i]);
            return 0;
        }
    }

    printf("Output: -1 (No repeating character)\n");
    return 0;
}
