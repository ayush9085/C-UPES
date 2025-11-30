// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

// /*
// Sample Test Cases:
// Input 1:
// GUEST
// Output 1:
// Welcome Guest!

// */
#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char r[20];
    enum Role role;

    scanf("%s", r);

    if (strcmp(r, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(r, "USER") == 0)
        role = USER;
    else
        role = GUEST;

    if (role == ADMIN)
        printf("Welcome Admin!");
    else if (role == USER)
        printf("Welcome User!");
    else
        printf("Welcome Guest!");

    return 0;
}
