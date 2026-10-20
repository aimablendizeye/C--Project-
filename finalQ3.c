
#include<stdio.h>

int main () {
int amount;
int member_status ;
float total_amount = 0;
float discount_amount;
char payment_method; 
float  pay_fees; 
float final_amount;

printf("Enter the amout:");
scanf("%d",&amount);

printf("Enter the Membership status (1 or 0):");
scanf("%d",& member_status);




if (amount >10000 && member_status == 1){
    discount_amount = amount* 0.2;
    final_amount =  amount - discount_amount;
    printf("Total amount %.2f",final_amount);

   // return 1; 
}

else if ((amount >10000 && member_status == 0) || (amount > 5000 && amount <=10000 && member_status == 1) ) {
    discount_amount = amount* 0.1;
    final_amount =  amount - discount_amount;
     printf("Total amount: %.2f",final_amount);

   // return 1;
    
}

else if (amount > 5000 && amount <=10000 && member_status == 0 ) {
   discount_amount = amount* 0.05;
   final_amount =  amount - discount_amount;
   printf("Total amount: %.2f",final_amount);

   // return 1;
}

else{
    final_amount = amount;
    printf("Total amount: %.2f",final_amount);

   // return 1;
}

printf ("\nEnter the Payment Method :");
scanf(" %c",&payment_method);

switch (payment_method)
{
      case 'M':
           pay_fees = final_amount * 0.015;
           total_amount = final_amount + pay_fees;  
           printf("The amount to be paid: %.2f",total_amount); 
      break;

      case 'C':
           pay_fees = final_amount * 0.01;
           total_amount = final_amount + pay_fees;
           printf("The amount to be paid: %.2f",total_amount);    
       break;
       case 'H':
             total_amount = final_amount; 
             printf("The amount to be paid: %.2f",total_amount);     
       break;
      default:
              printf("Pls you should choice payment option!");
    break;
}


    return 0;
}