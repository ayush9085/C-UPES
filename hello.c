 #include <stdio.h>
int main(){
    int a,b,sum;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    sum=a+b;
    if (sum>0){
        printf("sum is positive\n");
    } else if (sum<0){
        printf("sum is negative\n");
    } else {
        printf("sum is zero\n");
    }
    return 0;
}