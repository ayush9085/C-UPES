/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>

int main() {
    FILE *file;
    char line[256]; // Buffer to store each line

    // Open the existing file in read mode
    file = fopen("info.txt", "r");

    // Check if file exists or opened successfully
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}
