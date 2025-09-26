/*Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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
return 0;
}