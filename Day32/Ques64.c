/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
 #include <stdio.h>
int main(){
    int n;
    int freq[10]={0};
    printf("Enter the Number :");
    scanf("%d" ,&n);
    while(n>0){
        int digit = n%10;
        freq[digit]++;
        n/=10;
    }
    
    

}