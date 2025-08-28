#include <stdio.h>
int main(){
    char ch;
    printf("Enter the Character :");
    scanf("%c" , &ch);
    if(ch >= 65 && ch <=90){
        printf("Uppercase Alphabet");
    }
    else if(ch >=97 && ch <=122){
        printf("LowerCase Alphabet");
    }
    else if(ch>=48 && ch<=57){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}