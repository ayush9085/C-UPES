/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
 #include <stdio.h>
int main(){
    int n,count1=0,count2=0,count3=0;
    printf("How many inputs?");
    scanf("%d" ,&n);
    int arr[n];
     
    printf("Enter Inputs :");
    for(int i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }
        printf("Entered Inputs are :\n");
        for(int i=0;i<n;i++){
        printf("%d " , arr[i]);
        if(arr[i]>0){
            count1++;//positive 
        }
        if(arr[i]<0){
            count2++;//negative
        }
        if(arr[i]==0){
            count3++;//zero
        }
    }
    printf("\nPositive Numbers are:%d \n odd numbers are: %d\n Zero:%d" , count1,count2,count3);
}
