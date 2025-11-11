/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    int sum = 0;
    float average;

    // Open the file in read mode
    fp = fopen("numbers.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Read all integers from the file
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }


    fclose(fp);

    // Check if any numbers were read
    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    // Calculate average
    average = (float)sum / count;

    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
