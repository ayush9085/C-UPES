#include <stdio.h>

int main() {
    // lets create a addition program by taking input from user
    int a, b, sum;
    printf("Enter First integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum: %d\n", sum);

    
    return 0;
}