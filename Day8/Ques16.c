/* Q16: Write a program to input three numbers and find the largest among them using if–else.

Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0
*/

#include <stdio.h>
int main(){
    int Num1,Num2,Num3;
    printf("Enter Num1 :");
    scanf("%d" ,&Num1);
    printf("Enter Num2 :");
    scanf("%d", &Num2);
    printf("Enter Num3 :");
    scanf("%d" , &Num3);
    if(Num1>Num2 && Num1>Num3){
        printf("Largest is %d" ,Num1);
    }
        else if (Num2>Num1 && Num2>Num3 ){
            printf("Largest is %d" ,Num2);
    }
    else{
        printf("Largest is %d" ,Num3);
    }
    return 0;
    
    
}