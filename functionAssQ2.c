
#include <stdio.h>

/* Processes one withdrawal. Changes the caller's balance through the pointer. */
void withdraw(int *balance, int amount)
{
    if (amount < 0) {
        printf("Rejected: negative withdrawal amount.\n");
        return;
    }
    if (amount == 0) {
        printf("Rejected: withdrawal amount cannot be zero.\n");
        return;
    }
    if (amount > *balance) {
        printf("Rejected: amount exceeds current balance (%d).\n", *balance);
        return;
    }

    *balance = *balance - amount;   /* modifies the original variable in main() */

    printf("Withdrawal amount: %d\n", amount);
    printf("New balance: %d\n", *balance);

    if (*balance == 0) {
        printf("Account emptied successfully.\n");
    }
}

int main(void)
{
    int balance = 1000;             /* initial account balance */
    int amount;
    int before;
    int successCount = 0;
    int totalWithdrawn = 0;
    int invalidInRow = 0;
    char choice;

    printf("Initial balance: %d\n", balance);

    while (balance > 0) {
        printf("\nMake a withdrawal? (y/n): ");
        if (scanf(" %c", &choice) != 1 || (choice != 'y' && choice != 'Y')) {
            break;
        }

        printf("Enter withdrawal amount: ");
        if (scanf("%d", &amount) != 1) {
            /* non-numeric input: discard the rest of the line, count as invalid */
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
            printf("Rejected: invalid input.\n");
            invalidInRow++;
        } else {
            before = balance;
            withdraw(&balance, amount);   /* pass the address of balance */

            if (balance != before) {      /* balance changed => success */
                successCount++;
                totalWithdrawn += before - balance;
                invalidInRow = 0;
            } else {
                invalidInRow++;
            }
        }

        if (invalidInRow == 3) {
            printf("Transaction session terminated due to repeated invalid attempts.\n");
            break;
        }
    }

    printf("\n--- Summary ---\n");
    printf("Successful withdrawals: %d\n", successCount);
    printf("Total amount withdrawn: %d\n", totalWithdrawn);
    printf("Final balance: %d\n", balance);

    return 0;
}