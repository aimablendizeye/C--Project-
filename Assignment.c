
#include <stdio.h>

int main () {
    int num1;
    int num2;
    char operator;
    int result ;

    printf("Enter the first number:");
    scanf("%d",&num1);

     printf("Enter the second number:"); 
     scanf("%d",&num2);

     printf("Enter the operator number(+ or - or * or / or % ):\n");
     scanf(" %c",&operator);

    if(operator == '+') {
        result = num1+ num2;
        printf("The result is: %d\n", result);
    }

    else if (operator == '-'){
        result = num1-num2;

        printf("The result is: %d\n", result);
    }
      else if (operator == '*'){
        result = num1*num2;

        printf("The result is: %d\n", result);
    }

      else if (operator == '/'){
        result = num1/num2;

        printf("The result is: %d\n", result);
    }

      else if (operator == '%'){
        result = num1 % num2;

        printf("The result is: %d\n", result);
    }
    else {
        printf("Invalid Operator!\n");
        printf("pls choose one in the listed operators");
        
    }
   
    return 0;
}