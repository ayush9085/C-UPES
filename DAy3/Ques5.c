/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
int main (){
    int temp_in_c,temp_in_far;
    printf("Enter temperature in Clesius");
    scanf("%d", &temp_in_c);
    temp_in_far=temp_in_c*9/5 +32;
    printf("Fahrenheit=%d\n", temp_in_far);
    return 0;


    
}