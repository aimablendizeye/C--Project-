#include<stdio.h>

int main () {


    int initial_balance = 50000;
    int amount;
    int option;
    int result;

    printf("Menu:\n" 
        "1. Check Balance:\n"
         "2. Deposit:\n" 
         "3. Withdraw:\n"
         "4. Exit\n");

    printf("\nEnter your option:");
    scanf("%d",&option);
    
    switch (option){
        case 1:
          printf("Your have this balance :%d",initial_balance);
          break;
        case 2:
          printf("Enter the amount you want to deposit:");                                                                                                                
          scanf("%d",&amount);
          if(amount <=0) {
            printf("Invalid deposit amount\n");
            return 1;
          }
          result = initial_balance + amount;
          printf("Your new balance :%d",result);
          break;

        case 3: 
          printf("The amount you need to withdraw:");
          scanf ("%d",&amount);  

          if (amount > initial_balance ) {
            printf("Insufficient Balance");

            return 1;

          }
          else if(amount <= 0) {
            printf("Invalid withdrawal amount");

            return 1;
          }

          result = initial_balance - amount;
          printf("Your new balance is :%d",result);
          break;

          case 4:
                  printf("Good bye");
                  break;
          default:
                  printf ("%d is invalid option",option);
                  break;        

    }



    return 0;
}