//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
 #include <stdio.h>
#include <math.h>

int main() {
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    // Step 1: print smaller factors (sorted ascending)
    for (i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("%d ", i);
            count++;

            // Avoid duplicate when n is a perfect square
            if (i != n / i) {
                // Store bigger factor for later (but here we can print directly)
            }
        }
    }

    // Step 2: print larger factors (from sqrt(n) downwards to keep sorted order)
    for (i = (int)sqrt(n); i >= 1; i--) {
        if (n % i == 0 && n / i != i) {
            printf("%d ", n / i);
            count++;
        }
    }

    printf("\nTotal factors = %d\n", count);

    return 0;
}
