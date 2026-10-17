#include <stdio.h>

int main() {
    int balance = 50000;   // starting balance in RWF
    int option = 0;
    int amount;

    while (option != 4) {
        printf("\nMenu:\n"
               "1. Check Balance\n"
               "2. Deposit\n"
               "3. Withdraw\n"
               "4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Current balance: %d RWF\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%d", &amount);
                if (amount <= 0) {
                    printf("Invalid deposit amount\n");
                } else {
                    balance += amount;
                    printf("Updated balance: %d RWF\n", balance);
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%d", &amount);
                if (amount <= 0) {
                    printf("Invalid withdrawal amount\n");
                } else if (amount > balance) {
                    printf("Insufficient funds\n");
                } else {
                    balance -= amount;
                    printf("Updated balance: %d RWF\n", balance);
                }
                break;

            case 4:
                printf("Exit\n");
                break;

            default:
                printf("Invalid option\n");
                break;
        }
    }

    return 0;
}