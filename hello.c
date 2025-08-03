#include <stdio.h>

int main() {
    // lets create a addition program by taking input from user
    int a, b, sum;
    printf("Enter First integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    sum = a + b;
     if (sum>0){
        printf("sum is positive\n");
    } else if (sum<0){
        printf("sum is negative\n");
    } else {
        printf("sum is zero\n");    
     }

    
    return 0;
}