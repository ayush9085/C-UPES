/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant
*/
#include <stdio.h>
#include <ctype.h> //for using tolower
int main (){
    char ch;
    printf("Enter the Alphabet :");
    scanf("%s", &ch);
    //converting uppercase to lower case well to check for only one case
    ch = tolower(ch);
    if (ch >= 'a' && ch <= 'z'){//checking if char is alphabet or not
        if( ch=='a'|| ch== 'e' || ch== 'i' || ch=='o' || ch== 'u'){//checking for vowel
            printf("Alphabet is Vowel");
        }
        else{
            printf("Alphabet is consonant");
        }
    }
    else{
        printf("Not an Alphabet");
    }
    return 0;
}

