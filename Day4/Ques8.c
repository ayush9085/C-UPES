/*Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55
*/

#include <stdio.h>
int main(){
    int Num, i, sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &Num);//taking input 

    for(i = 1; i <= Num; i++){//for loop
        sum += i;
    }

    printf("Sum=%d\n", sum);//printing the output
    return 0;
}