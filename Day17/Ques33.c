//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, count = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Step 1: count digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
     // Step 2: calculate sum of digits^count
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, count);
        temp /= 10;
    }

    // Step 3: compare
    if ((int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
