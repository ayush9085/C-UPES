/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>
int main(){
    int seconds, hour, minute, sec;//initializig variable
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);//taking input

    hour = seconds / 3600;//calculating houurs
    seconds = seconds % 3600;//reamining seconds
    minute = seconds / 60;//calculating minutes from remaining seconds
    sec = seconds % 60;//remaining seconds

    printf("%d:%d:%d\n", hour, minute, sec);//printing the values
    return 0;
}