/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

struct student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    FILE *file;
    struct student stu[2];

    // Storing student records
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 0; i < 2; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", stu[i].name, &stu[i].roll, &stu[i].marks);
        fprintf(file, "%s %d %d\n", stu[i].name, stu[i].roll, stu[i].marks);
    }
    fclose(file);

    // Reading and displaying student records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %d", stu[0].name, &stu[0].roll, &stu[0].marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", stu[0].name, stu[0].roll, stu[0].marks);
    }
    fclose(file);

    return 0;
}