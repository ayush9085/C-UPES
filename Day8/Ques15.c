/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character */

 
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