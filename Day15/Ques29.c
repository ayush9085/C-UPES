//Q29: Write a program to calculate the factorial of a number.
/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6
*/
#include <stdio.h>
int main(){
    int Num,factorial=1,i ;
    printf("Enter the Number to claculate factorial :");
    scanf("%d" , &Num);
    for(i=1;i<=Num;i++){
        factorial=factorial*i;
    }
    
    printf("%d" ,factorial);
    return 0;
}
