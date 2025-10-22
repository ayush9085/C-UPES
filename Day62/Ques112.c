/*Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>

int maxSubarraySum(int *arr, int n) {
    int max_so_far = *(arr);
    int current_max = *(arr);

    for (int i = 1; i < n; i++) {
        int val = *(arr + i);
        if (current_max + val > val)
            current_max = current_max + val;
        else
            current_max = val;

        if (current_max > max_so_far)
            max_so_far = current_max;
    }

    return max_so_far;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    int result = maxSubarraySum(ptr, n);
    printf("Maximum subarray sum is: %d\n", result);

    return 0;
}
