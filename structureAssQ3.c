

#include <stdio.h>
 
struct Employee {
    int id;
    char name[30];
    float basic;
    float bonus;
    float deduction;
    float net;
};
 
/* Net = Basic + Bonus - Deduction */
void calculateNet(struct Employee *e) {
    e->net = e->basic + e->bonus - e->deduction;
}
 
/* Print the category of an employee */
void classify(float net) {
    if (net >= 100000)
        printf("High Earner");
    else if (net >= 50000)
        printf("Moderate");
    else
        printf("Low Earner");
}
 
/* Read one employee and check the salary values */
void inputEmployee(struct Employee *e) {
    printf("Enter ID: ");
    scanf("%d", &e->id);
    printf("Enter name: ");
    scanf("%s", e->name);
 
    do {
        printf("Enter basic salary: ");
        scanf("%f", &e->basic);
        printf("Enter bonus: ");
        scanf("%f", &e->bonus);
        printf("Enter deduction: ");
        scanf("%f", &e->deduction);
 
        if (e->basic < 0 || e->bonus < 0 || e->deduction < 0)
            printf("Salary values cannot be negative. Enter again.\n");
        else if (e->deduction > e->basic)
            printf("Invalid salary structure. Enter again.\n");
    } while (e->basic < 0 || e->bonus < 0 || e->deduction < 0
             || e->deduction > e->basic);
 
    calculateNet(e);
}
 
/* Return the position of the employee with the highest net salary */
int findHighest(struct Employee emp[], int n) {
    int best = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].net > emp[best].net)
            best = i;
    }
    return best;
}
 
int main() {
    struct Employee emp[4];
 
    for (int i = 0; i < 4; i++) {
        printf("\nEmployee %d\n", i + 1);
        inputEmployee(&emp[i]);
    }
 
    printf("\nID\tName\tNet Salary\tCategory\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t%s\t%.2f\t", emp[i].id, emp[i].name, emp[i].net);
        classify(emp[i].net);
        printf("\n");
    }
 
    int top = findHighest(emp, 4);
    printf("\nHighest earner: %s (Net: %.2f)\n", emp[top].name, emp[top].net);
 
    return 0;
}