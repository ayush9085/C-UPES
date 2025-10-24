/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> // for tolower()

int cmp(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // Step 1: Convert both strings to lowercase
    for (int i = 0; i < len1; i++) {
        s1[i] = tolower(s1[i]);
    }
    for (int i = 0; i < len2; i++) {
        s2[i] = tolower(s2[i]);
    }

    // Step 2: Compare lengths
    if (len1 != len2) {
        printf("Not Anagrams\n");
        return 0;
    }
