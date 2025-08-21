// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
// Sample Test Cases:
// Input 1:
// 10 2
// Output 1:
// Sum=12, Diff=8, Product=20, Quotient=5

// Input 2:
// 7 3
// Output 2:
// Sum=10, Diff=4, Product=21, Quotient=2

#include <stdio.h>
int main(){
    int Num1,Num2,sum,difference,product,quotient;
    printf("Enter First Number");
    scanf("%d", &Num1);
    printf("Enter Second Number");
    scanf("%d", &Num2);
    sum=Num1+Num2;
    difference=Num1-Num2;
    product=Num1*Num2;
    quotient=Num1/Num2;
    printf("The Sum is:%d", &sum);
    printf("The Difference is:%d",&difference);
    printf("The product is:%d", &product);
    printf("The Quotient is:%d",&quotient);
    return 0;
    




}

