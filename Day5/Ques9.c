/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>//for calculating power of

int main() {
    float principal, rate, time, SI, CI;//initializing variables
    printf("Enter Principal Amount: ");
    scanf("%f",&principal);
    printf("Enter Rate: ");
    scanf("%f", &rate);
    printf("Enter TIme: ");
    scanf("%f" , &time);
    SI = (principal * rate * time) / 100;//calculated simple interest
    CI = principal * pow((1 + rate / 100), time) - principal;//calculateed acompound interest
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", SI, CI);//printed the values
    return 0;
}
