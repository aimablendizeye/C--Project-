

#include <stdio.h>
#include <string.h>
 
struct Patient {
    int id;
    char name[30];
    int age;
    float temp;
    char status[10];
};
 
/* Decide the status from the temperature */
void classify(struct Patient *p) {
    if (p->temp >= 38)
        strcpy(p->status, "Critical");
    else if (p->temp >= 37)
        strcpy(p->status, "Warning");
    else
        strcpy(p->status, "Normal");
}
 
/* Read one patient */
void inputPatient(struct Patient *p) {
    printf("Enter ID: ");
    scanf("%d", &p->id);
    printf("Enter name: ");
    scanf("%s", p->name);
    printf("Enter age: ");
    scanf("%d", &p->age);
 
    printf("Enter temperature: ");
    scanf("%f", &p->temp);
    while (p->temp < 30 || p->temp > 45) {
        printf("Invalid temperature! Enter again (30 - 45): ");
        scanf("%f", &p->temp);
    }
 
    classify(p);   /* status is set automatically */
}
 
/* Show all patients */
void display(struct Patient p[], int n) {
    printf("\nID\tName\tAge\tTemp\tStatus\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%.1f\t%s\n",
               p[i].id, p[i].name, p[i].age, p[i].temp, p[i].status);
    }
}
 
int main() {
    struct Patient patients[5];
    int critical = 0;
 
    for (int i = 0; i < 5; i++) {
        printf("\nPatient %d\n", i + 1);
        inputPatient(&patients[i]);
    }
 
    display(patients, 5);
 
    for (int i = 0; i < 5; i++) {
        if (strcmp(patients[i].status, "Critical") == 0)
            critical = 1;
    }
 
    if (critical)
        printf("\nImmediate attention required\n");
    else
        printf("\nNo critical cases found\n");
 
    return 0;
}