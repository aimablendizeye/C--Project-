

#include<stdio.h>


int main () {
    char operator ='+';
    int a = 5;
    int b = 6;
    float result;

    switch(operator) {
        case '+':
            result = a + b;
            return result;
            break;
         case '-':
            result = a - b;
            return result;
            break;

        case '*':
            result = a * b;
            return result;
            break;
        default:
            printf("invalid input");   

    }

    printf("%f",result);
    return 0;

}