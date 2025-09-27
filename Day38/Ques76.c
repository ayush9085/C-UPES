/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

void readMatrix(int r, int c, int m[r][c]) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}

void printMatrix(int r, int c, int m[r][c]) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int r, int c, int a[r][c], int b[r][c], int sum[r][c]) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];
    readMatrix(r1, c1, a);
scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    readMatrix(r2, c2, b);

    if(r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible\n");
        return 0;
    }

    int sum[r1][c1];
    addMatrices(r1, c1, a, b, sum);

    printMatrix(r1, c1, sum);

    return 0;
}

     