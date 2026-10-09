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
          printf("Your balance :%d",initial_balance);
          break;
        case 2:
          printf("Enter the amount you want to deposit:");
          scanf("%d",&amount);
          result = initial_balance + amount;
          printf("Your new balance :%d",result);
          break;

        case 3: 
          printf("The amount you need to withdraw:");
          scanf ("%d",&amount);  
          result = initial_balance - amount;
          printf("Your new balance is :%d",result);
          break;

    }



    return 0;
}