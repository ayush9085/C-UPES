/*Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main(){
    int row,column;
    printf("Enter no. Row");
    scanf("%d"  , &row);
     printf("Enter no. column");
    scanf("%d"  , &column);
    int arr[row][column];
    //lets take input
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d" ,&arr[i][j]);
        }
    }
    //now printing the array
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d " ,arr[i][j]);
        }
        printf("\n"); 
    }
    // Now calculating the sum of each row
    int sum[row];
    for(int i=0;i<row;i++){
        sum[i] = 0; // Initialize sum for each row
        for(int j=0;j<column;j++){
            sum[i] += arr[i][j]; // Add each element in the row
        }
    }
    // Printing the sum of each row
    for(int i=0;i<row;i++){
        printf("%d ", sum[i]);
    }
    return 0;
}