
#include<stdio.h>

int main() {
      
    int total = 0;
    int friends = 0;
    double fees = 0.0;
   
    //double remainder = fmod(total/friends);

    printf("Enter the total amount :",total);
    scanf("%d",&total);

    printf("Enter the number of friends  :",friends);
    scanf("%d",&friends);

    printf("Enter fees amount :",fees);
    scanf("%lf",&fees);


    double fees_amount = total * fees / 100;
    double amount_left = total - fees_amount;
    int Equal_share = total / friends ; 

     printf("\n========== AIRTIME SPLIT ==========\n");

    printf("Fees amount :%.2lf\n",fees_amount);
    printf(" Amount left: %.2lf\n",amount_left);
    printf("Equal_amount you paid :%d\n",Equal_share);
    printf("===================================\n");






    return 0; 
}