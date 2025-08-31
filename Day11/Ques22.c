//Q22: Write a program to find profit or loss percentage given cost price and selling price.
/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/
#include <stdio.h>
int main(){
    float sp,cp,profit,loss,profit_percent,loss_percent;
    printf("Enter Cost Price :");
    scanf("%f" , &cp);
    printf("Enter Selling Price :");
    scanf("%f" , &sp);
    if(sp>cp){
        profit=sp-cp;
        profit_percent= profit/cp *100;
        printf("Profit of %.2f%%", profit_percent);
    }
    else if(cp>sp){
        loss=cp-sp;
        loss_percent= loss/cp *100;
        printf("Loss of %.2f%%", loss_percent);
    }
    else{
        printf("No Profit No Loss");
    }

    return 0;
}