//  Q50: Write a program to print the following pattern:
// *****
// ****
// ***
// **
// *


#include <stdio.h>

int main() {
    int i, j;
    int n = 5;  // number of rows

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

 