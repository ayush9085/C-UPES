 #include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Boundary check
    if (a <= 0 || b <= 0) {
        printf("Numbers must be positive!\n");
        return 1;
    }

    // Euclidean Algorithm
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("HCF (GCD) = %d\n", a);

    return 0;
}
