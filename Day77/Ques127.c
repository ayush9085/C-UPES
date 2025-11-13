/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    fout = fopen("output.txt", "w");

    if (fin == NULL || fout == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Conversion complete. Check output.txt\n");

    return 0;
}
