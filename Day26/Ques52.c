/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
 #include <stdio.h>

int main() {
    int blocks[] = {4, 5, 3, 1};  // Number of stars in each block
    int nBlocks = 4;

    for (int i = 0; i < nBlocks; i++) {
        for (int j = 0; j < blocks[i]; j++) {
            printf("*\n");
        }
        printf("\n");  // blank line after each block
    }

    return 0;
}
