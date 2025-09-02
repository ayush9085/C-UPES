//Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
#include <stdio.h>

int main() {
    int Num;

    printf("Enter the value of n: ");
    scanf("%d", &Num);

    for (int i = 1; i <= Num; i++) {
        printf("%d ", i);
    }

    return 0;
}
