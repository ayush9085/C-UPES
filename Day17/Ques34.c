//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1; // assume prime initially

    printf("Enter a number: ");
    scanf("%d", &n);

    // Condition 1: number <= 1
    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    // Condition 2: 2 and 3 are prime
    if (n == 2 || n == 3) {
        printf("%d is a prime number.\n", n);
        return 0;
    }

    // Condition 3: check divisibility by 2
    if (n % 2 == 0) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    // Condition 4: check from 3 to sqrt(n), skipping even numbers
    for (i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
