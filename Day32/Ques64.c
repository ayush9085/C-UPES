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
     long long int n;
    int freq[10]={0};
    printf("Enter the Number :");
    scanf("%lld" ,&n);
    while(n>0){
        int digit = n%10;
        freq[digit]++;
        n/=10;
    }
    int max_freq=0, ans=0;
    for(int i=0;i<10;i++){
        if(freq[i]>max_freq){
            max_freq=freq[i];
            ans=i;
        }
    }
    printf("THe number whis appeared maximum times is :%d" , ans);
    return 0;


    

}