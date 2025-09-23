/*Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
 #include <stdio.h>
int main() {
    int arr[20] = {1, 2, 3, 4, 5};
    int n = 5;  // current size
    int pos, val;

    printf("Enter position to insert (1-%d): ", n+1);
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &val);

    if(pos < 1 || pos > n+1){
        printf("Invalid position!\n");
    } else {
        // shift elements to right
        for(int i = n; i >= pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos-1] = val;
        n++;  // size increases

        printf("Array after insertion: ");
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
