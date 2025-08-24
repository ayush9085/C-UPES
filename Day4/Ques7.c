/*Q7: Write a program to swap two numbers without using a third variable.

Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7
*/

#include <stdio.h>
int main() {
    int Num1,Num2;
    printf("Enter First number: ");
    scanf("%d",&Num1);
    printf("Enter Second number: ");
    scanf("%d",&Num2);
    printf("Entered Numbers are:%d,%d",Num1,Num2);

    // Swapping without using a third variable
    Num1 = Num1 + Num2;
    Num2= Num1 - Num2;
    Num1 = Num1 - Num2;

    printf("After swap: %d %d\n", Num1,Num2);
    return 0;
}