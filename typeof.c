
#include <stdio.h>
#include <string.h>

typedef enum {
    CASH = 1,
    MOBILE,
    BANK
} PaymentType;

typedef union {
    char receiptNo[20];
    char phoneNumber[15];
    char accountNumber[25];
} PaymentDetail;

typedef struct {
    char customerName[50];
    float amount;
    PaymentType type;
    PaymentDetail detail;
} Payment;

void inputPayment(Payment *p);
void displayPayment(Payment p);
void printPaymentType(PaymentType type);

int main() {
    Payment p;

    inputPayment(&p);

    printf("\n===== PAYMENT RECORD =====\n");
    displayPayment(p);

    return 0;
}

void inputPayment(Payment *p) {
    int choice;

    printf("Enter customer name: ");
    fgets(p->customerName, sizeof(p->customerName), stdin);

    size_t len = strlen(p->customerName);
    if (len > 0 && p->customerName[len - 1] == '\n') {
        p->customerName[len - 1] = '\0';
    }

    printf("Enter amount paid: ");
    scanf("%f", &p->amount);

    printf("\nSelect payment type:\n");
    printf("1. Cash\n");
    printf("2. Mobile Money\n");
    printf("3. Bank Transfer\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar(); // clear newline

    p->type = (PaymentType)choice;

    switch (p->type) {
        case CASH:
            printf("Enter receipt number: ");
            fgets(p->detail.receiptNo, sizeof(p->detail.receiptNo), stdin);
            len = strlen(p->detail.receiptNo);
            if (len > 0 && p->detail.receiptNo[len - 1] == '\n') {
                p->detail.receiptNo[len - 1] = '\0';
            }
            break;

        case MOBILE:
            printf("Enter mobile number: ");
            fgets(p->detail.phoneNumber, sizeof(p->detail.phoneNumber), stdin);
            len = strlen(p->detail.phoneNumber);
            if (len > 0 && p->detail.phoneNumber[len - 1] == '\n') {
                p->detail.phoneNumber[len - 1] = '\0';
            }
            break;

        case BANK:
            printf("Enter account number: ");
            fgets(p->detail.accountNumber, sizeof(p->detail.accountNumber), stdin);
            len = strlen(p->detail.accountNumber);
            if (len > 0 && p->detail.accountNumber[len - 1] == '\n') {
                p->detail.accountNumber[len - 1] = '\0';
            }
            break;

        default:
            printf("Invalid payment type selected.\n");
            p->type = 0;
    }
}

void displayPayment(Payment p) {
    printf("Customer Name : %s\n", p.customerName);
    printf("Amount Paid   : %.2f\n", p.amount);
    printf("Payment Type  : ");
    printPaymentType(p.type);
    printf("\n");

    switch (p.type) {
        case CASH:
            printf("Receipt No    : %s\n", p.detail.receiptNo);
            break;

        case MOBILE:
            printf("Phone Number  : %s\n", p.detail.phoneNumber);
            break;

        case BANK:
            printf("Account No    : %s\n", p.detail.accountNumber);
            break;

        default:
            printf("No valid payment detail available.\n");
    }
}

void printPaymentType(PaymentType type) {
    switch (type) {
        case CASH:
            printf("Cash");
            break;
        case MOBILE:
            printf("Mobile Money");
            break;
        case BANK:
            printf("Bank Transfer");
            break;
        default:
            printf("Unknown");
    }
}