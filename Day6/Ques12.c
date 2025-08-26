/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive
*/

#include <stdio.h>
int main(){
    int Num;
    printf("Input an Integer: ");
    scanf("%d", &Num);
    if(Num>=0){
        if(Num==0){//nested loop
            printf("Zero");
        }
        else{
            printf("Positive");
        }//nested loop ended
     }
     else{
        printf("Negative");
     }
     return 0;
}