/*Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, temp;

    scanf("%s %d %f", e.name, &e.id, &e.salary);

    FILE *fp = fopen("employee.bin", "wb");
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee details entered and stored in file.\n");

    fp = fopen("employee.bin", "rb");
    fread(&temp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Displays employee data read from file.\n");
    printf("Name: %s | ID: %d | Salary: %.2f", temp.name, temp.id, temp.salary);

    return 0;
}
