/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.

Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even
*/

#include <stdio.h>
int main(){
    int Num;
    printf("Input an Integer: ");
    scanf("%d", &Num);
    if(Num % 2 == 0){
        printf("%d is even\n", Num);
    }
    else{
        printf("%d is odd\n", Num);
    }
    return 0;
}