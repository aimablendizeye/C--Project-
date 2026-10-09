
#include<stdio.h>

int main () {
    float marks;
    float monthly_income;
    int disability_status ;

    printf("Enter the Marks You got (0-100): ");
    scanf("%f",&marks);

    if (marks <0 || marks >100 ) {
        printf("Invalid input");

        return 0;
    }

    printf("Enter the familily income: ");
    scanf("%f",&monthly_income);

    printf("Enter the disability status (1 if disabled, 0 if not): ");
    scanf("%d",&disability_status);

    if (disability_status != 1 && disability_status !=0) {
        printf("Invalid input");
        return 0;
    }


    if(marks >=80 && monthly_income <=300000 ) {
        printf(" You are Qualified for scholarship");
    }
    else {
        printf("You are not Qualified for scholarship");
    }


  return 0;
}