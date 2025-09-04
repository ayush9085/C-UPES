//Q30: Write a program to reverse a given number.
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/
#include <stdio.h>
int main() {
    int Num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &Num);

    while (Num > 0) {
        digit = Num % 10;        
        rev = rev * 10 + digit;  
        Num = Num / 10;          
    }

    printf("Reversed number: %d\n", rev);

    return 0;
}
