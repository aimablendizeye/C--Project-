#include <stdio.h>
 
struct account {
    int accNo;
    char name[30];
    float balance;
};
 
/* acc is a pointer, so the real balance is changed */

void withdraw(struct account *acc, float amount) {
    if (amount < 0) {
        printf("Invalid: negative withdrawal\n");
    }
    else if (amount > acc->balance) {
        printf("Invalid: not enough balance\n");
    }
    else {
        acc->balance = acc->balance - amount;
        printf("Withdrawal successful. New balance: %.2f\n", acc->balance);
 
        if (acc->balance == 0)
            printf("Account Closed\n");
        else if (acc->balance < 1000)
            printf("Low Balance Warning\n");
    }
}
 
int main() {
    struct account accounts[3];
    float amount;
 
    /* Input 3 accounts */
    for (int i = 0; i < 3; i++) {
        printf("\nAccount %d\n", i + 1);
        printf("Enter account number: ");
        scanf("%d", &accounts[i].accNo);
        printf("Enter name: ");
        scanf("%s", accounts[i].name);
        printf("Enter balance: ");
        scanf("%f", &accounts[i].balance);
    }
 
    /* One withdrawal for each account */
    for (int i = 0; i < 3; i++) {
        printf("\nAccount %d (%s), balance %.2f\n",
               accounts[i].accNo, accounts[i].name, accounts[i].balance);
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        withdraw(&accounts[i], amount);   /* pass the address */
    }
 
    /* Show final balances */
    printf("\nFinal balances:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d  %s  %.2f\n",
               accounts[i].accNo, accounts[i].name, accounts[i].balance);
    }
 
    return 0;
}