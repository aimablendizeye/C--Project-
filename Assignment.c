
#include <stdio.h>
#include <math.h>

int main () {
    double num1 = 0.0;
    double num2 = 0.0;
    char operator = '\0';
    double result = 0.0 ;
   // char message[100] = "You can't devide by zero";

    printf("Enter the first number:");
    scanf("%lf",&num1);

     printf("Enter the second number:"); 
     scanf("%lf",&num2);

     printf("Enter the operator number(+,-,*,/, % ):\n");
     scanf(" %c", &operator);

     switch (operator) {
        case '+':
            result = num1+ num2;
            break;
        case '-':
            result = num1- num2;
            break;
        case '*':
            result = num1*num2;
            break;   
        case '/':
          if (num2 == 0) {
            printf("You can not divide by zero");
           // printf("%s\n", message);
                return 0;
          }
          else {
            result = num1/ num2;
            break;

          }  
        case '%':
            result =fmod(num1,num2);
            break;  
            
         default: 
              printf("Invalid Operator!\n");
              printf("pls choose one in the listed operators");
                  
    }

    printf("The result is : %.2f",result);
   
    return 0;
}

    // if(operator == '+') {
    //     result = num1+ num2;
    //     printf("The result is: %.2f\n", result);
    // }

    // else if (operator == '-'){
    //     result = num1-num2;

    //     printf("The result is: %.2f\n", result);
    // }
    //   else if (operator == '*'){
    //     result = num1*num2;

    //     printf("The result is: %.2f\n", result);
    // }

    //   else if (operator == '/'){
    //     result = num1/num2;

    //     printf("The result is:%.2f\n", result);
    // }

    //   else if (operator == '%'){
    //     result = fmod(num1 , num2) ;

    //     printf("The result is: %.2f\n", result);
    // }
    // else {
    //     printf("Invalid Operator!\n");
    //     printf("pls choose one in the listed operators");
        
    // }

