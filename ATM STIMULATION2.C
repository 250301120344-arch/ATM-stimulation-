#include <stdio.h>
int main() {
    int pin = 2006, enteredPin;
    int balance = 5000;
    int choice, amount;

    printf("====== ATM Simulation ======\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Exiting...\n");
        return 0;
    }

    do {
        printf("\n====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your current balance is: %d\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful! New balance: %d\n", balance);
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful! Remaining balance: %d\n", balance);
                } else {
                    printf("Invalid or insufficient amount.\n");
                }
                break;

            case 4:
                printf("Thank you for using ATM.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
