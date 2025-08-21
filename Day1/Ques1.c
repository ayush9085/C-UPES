// Q1: Write a program to input two numbers and display their sum.
// Sample Test Cases:
// Input 1:
// 3 4
// Output 1:
// Sum = 7

// Input 2:
// -1 20
// Output 2:
// Sum = 19

#include <stdio.h>
int main (){
    int a,b,Sum;
    printf("Enter 1st Number.");
    scanf("%d",&a);
    printf("Enter 2nd Number.");
    scanf("%d",&b);
    Sum=a+b;
    printf("The Sum of both Number is:%d\n", Sum);
    return 0;
}