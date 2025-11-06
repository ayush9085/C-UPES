/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src, *dest;
    char srcFile[100], destFile[100];
    char ch;

    // Take filenames from user
    printf("Enter source filename: ");
    scanf("%s", srcFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file for reading
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    // Open destination file for writing
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(src);
        return 1;
    }

    // Copy contents using fgetc() and fputc()
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully to %s\n", destFile);

    // Close both files
    fclose(src);
    fclose(dest);

    return 0;
}
