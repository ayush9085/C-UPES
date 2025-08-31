//Q21: Write a program to display the month name and number of days using switch-case for a given month number.
/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days
*/
#include <stdio.h>
int main(){
    int Num;
    printf("Enter the Month Number :");
    scanf("%d", &Num);
    switch(Num){
        case 12:
            printf("December,31 Days\n");
            break;
        case 1:
            printf("January,31 Days\n");
            break;
        case 2:
            printf("February,28 Days\n");
            break;
        case 3:
            printf("March,31 Days\n");
            break;
        case 4:
            printf("April,30 Days\n");
            break;
        case 5:
            printf("May,31 Days\n");
            break;
        case 6:
            printf("June,30 Days\n");
            break;
        case 7:
            printf("July,31 Days\n");
            break;
        case 8:
            printf("August,31 Days\n");
            break;
        case 9:
            printf("September,30 Days\n");
            break;
        case 10:
            printf("October,31 Days\n");
            break;
        case 11:
            printf("November,30 Days\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

 