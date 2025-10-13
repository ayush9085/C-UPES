/*Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int num, first, last, temp, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while (temp >= 10) {
        temp /= 10;
        pow *= 10;
    }
    first = temp;

    num = num % pow;     
    num = num / 10;      

    printf("After swapping: %d\n", last * pow + num * 10 + first);

    return 0;
}
