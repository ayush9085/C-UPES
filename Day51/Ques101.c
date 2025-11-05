/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>

// Function to find the first occurrence
int firstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;  // keep searching left side
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

// Function to find the last occurrence
int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;  // keep searching right side
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target element: ");
    scanf("%d", &target);

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    if (first == -1)
        printf("-1,-1\n");
    else
        printf("%d,%d\n", first, last);

    return 0;
}
