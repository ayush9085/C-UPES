// an average calculator
#include <stdio.h>
int main() {
    int n, i;
    double sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        double num;
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &num);
        sum += num;
    }

    average = sum / n;
    printf("The average is: %.2lf\n", average);

    return 0;
}