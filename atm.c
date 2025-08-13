// in this program we will try to replicate how an atm withdrawal works.
#include <stdio.h>

int main() {
    // declaring pin and balance by own for a while
    int pin = 1234;
    float balance = 10000.0;
    // variables
    float withdrawalAmount;
    int enteredPin;

    printf("Welcome to the ATM\n");
    printf("Please enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin) {
        printf("PIN verified successfully.\n");
        printf("Your current balance is: %.2f\n", balance);
        printf("Enter the amount you want to withdraw: ");
        scanf("%f", &withdrawalAmount);

        if (withdrawalAmount > 0 && withdrawalAmount <= balance) {
            balance -= withdrawalAmount;
            printf("Please take your cash: %.2f\n", withdrawalAmount);
            printf("Your new balance is: %.2f\n", balance);
        } else {
            printf("Invalid withdrawal amount.\n");
        }
    } else {
        printf("Incorrect PIN. Please try again.\n");
    }

    return 0;
}
