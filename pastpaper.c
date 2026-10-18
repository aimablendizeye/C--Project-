
#include<stdio.h>

int main () {

//    for (int  i=1; i<=5; i++) {
//     printf("%d\n",i);
//    }


// int count = 5;

// while (count >=1) {
//     printf("%d\n",count);
//     count --;
// }

// int x = 3;

// int y =  ++ x;
// printf("%d",y);

// smart shop

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


printf ("Enter the Payment Method :");
scanf("%c ",& payment_method);

switch (payment_method)
{
      case 'M':
           pay_fees = amount * 0.015;
           total_amount = amount + pay_fees;   
      break;

      case 'C':
           pay_fees = amount * 0.01;
           total_amount = amount + pay_fees;   
       break;
       case 'H':
             total_amount = amount;     
       break;
      default:
              printf("Pls you should choice payment option!");
    break;
}



if (amount >10000 && member_status == 1){
    discount_amount = total_amount* 0.2;
    final_amount =  total_amount - discount_amount;
    printf("Total amount %.2f",final_amount);

    return 0; 
}

else if ((amount >10000 && member_status == 0) || (amount > 5000 && amount <=10000 && member_status == 1) ) {
    discount_amount = total_amount* 0.1;
    final_amount =  total_amount - discount_amount;
     printf("Total amount %.2f",final_amount);

    return 0;
    
}

else if (amount > 5000 && amount <=10000 && member_status == 0 ) {
   discount_amount = total_amount* 0.05;
   final_amount =  total_amount - discount_amount;
   printf("Total amount %.2f",final_amount);

    return 0;
}

else{
    final_amount =total_amount;
    printf("Total amount %.2f",final_amount);

    return 0;
}


printf(" You have  to pay:%.2f",final_amount);




    return 0;
}