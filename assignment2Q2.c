#include <stdio.h>

int main() {
    int balance = 50000;
    int amount;
    int option;
    int running = 1;

    while (running) {
        printf("\nMenu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your option: ");
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
                running = 0;
                break;

            default:
                printf("Invalid option\n");
                break;
        }
    }

    return 0;
}