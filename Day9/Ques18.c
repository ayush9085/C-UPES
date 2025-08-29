/*Q18: Write a program to assign grades based on a percentage input.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F
*/
#include <stdio.h>
int main(){
    float percent;
    printf("Enter Your Percentage :");
    scanf("%f" ,&percent);
    if(percent >=90){
        printf("Grade A");
    }
    else if(percent >=80){
        printf("Grade B");
    }
    else if(percent>=70){
        printf("Grade C");
    }
    else if(percent>=60){
        printf("Grade D");
    }
    else if(percent >=50){
        printf("Grade E");
    }
    else{
        printf("Grade F ");
    }
    return 0;
}