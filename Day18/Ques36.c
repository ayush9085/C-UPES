//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter First numbers: ");
    scanf(" %d", &a);
    printf("Enter First numbers: ");
    scanf("%d ", &b);

    // Boundary check
    if (a <= 0 || b <= 0) {
        printf("Numbers must be positive!\n");
        return 1;
    }

    // Euclidean Algorithm
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("HCF (GCD) = %d\n", a);

    return 0;
}
