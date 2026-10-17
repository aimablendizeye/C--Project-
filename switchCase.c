

#include<stdio.h>


int main () {
    char operator;
    int a = 5;
    int b = 6;
    float result;

    printf("Enter the operator:");
    scanf("%c",&operator);

    switch(operator) {
        case '+':
            result = a + b;
            printf("%f",result);
            break;
         case '-':
            result = a - b;
            printf("%f",result);
            break;

        case '*':
            result = a * b;
            printf("%f",result);
            break;
        default:
            printf("invalid input");   

    }


}