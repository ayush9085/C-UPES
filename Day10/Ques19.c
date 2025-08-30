/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene
*/
#include <stdio.h>
int main() {
    int side1, side2, side3;
    printf("Enter First side of Triangle: ");
    scanf("%d", &side1);
    printf("Enter Second side of Triangle: ");
    scanf("%d", &side2);
    printf("Enter Third side of Triangle: ");
    scanf("%d", &side3);

    if (side1 + side2 > side3 &&
        side2 + side3 > side1 &&
        side1 + side3 > side2) {
        printf("Valid Triangle\n");

        // Equilateral
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral triangle\n");
        } else {
            // Isosceles
            if (side1 == side2 || side2 == side3 || side1 == side3) {
                printf("Isosceles triangle\n");
            } else {
                printf("Scalene triangle\n");
            }
        }

        // Right-angled (can be isosceles or scalene)
        if (side1*side1 + side2*side2 == side3*side3 ||
            side2*side2 + side3*side3 == side1*side1 ||
            side1*side1 + side3*side3 == side2*side2) {
            printf("Right Angle Triangle\n");
        }
    } else {
        printf("Not a Valid Triangle\n");
    }
    return 0;
}

