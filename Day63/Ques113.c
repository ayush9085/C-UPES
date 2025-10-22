/*Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>
#include <limits.h>  // for INT_MAX

int findKthSmallest(int *arr, int n, int k) {
    int min, kth;
    
    // Array to mark already used smallest elements
    int used[n];
    for (int i = 0; i < n; i++) {
        used[i] = 0;
    }

    // Repeat k times to find the kth smallest
    for (int count = 1; count <= k; count++) {
        min = INT_MAX;
        int index = -1;

        // Find the smallest unused element
        for (int i = 0; i < n; i++) {
            if (!used[i] && *(arr + i) < min) {
                min = *(arr + i);
                index = i;
            }
        }

        // Mark this element as used
        used[index] = 1;
        kth = min;
    }

    return kth;
}

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Enter k: ");
    scanf("%d", &k);
    if (k <= 0 || k > n) {
        printf("Invalid k value!\n");
        return 0;
    }

    int result = findKthSmallest(ptr, n, k);
    printf("The %dth smallest element is: %d\n", k, result);

    return 0;
}


     