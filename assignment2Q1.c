#include <stdio.h>

int main() {
    int marks;
    int income;
    int disability;

    printf("Enter marks (0-100): ");
    if (scanf("%d", &marks) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter family income (RWF): ");
    if (scanf("%d", &income) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter disability status (1 = disabled, 0 = not): ");
    if (scanf("%d", &disability) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    if (marks < 0 || marks > 100 || income < 0 ||
        (disability != 0 && disability != 1)) {
        printf("Invalid input\n");
        return 0;
    }

    if (disability == 1 || (marks >= 80 && income <= 300000)) {
        printf("Qualified for scholarship\n");
    } else {
        printf("Not qualified for scholarship\n");
    }

    return 0;
}