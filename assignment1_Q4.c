

#include <stdio.h> 

int main () {
     
     float amount,official_rate, commission_rate, spread_rate;

     double effective_rate;
     long long commission_amount;
     long long amount_ramained;
     double amount_USD;

     printf("Enter the amount in (RWF):");
     scanf("%f", &amount);

     printf("Enter official rate:");
     scanf("%f", &official_rate);

     printf("Enter commission rate:");
     scanf("%f", &commission_rate);

     printf("Enter the Spread rate:");
     scanf("%f", &spread_rate);




     if (amount <=0 || official_rate <=0 || commission_rate <=0 || spread_rate <=0) {
        printf("Invalid input pls!,Try again with number greater than zero\n");
        return 1;
     }
 

     effective_rate = official_rate + spread_rate;
     commission_amount = amount * (commission_rate / 100);

     amount_ramained = amount - commission_amount;
     amount_USD = amount_ramained /effective_rate;


     printf("\n ===========THE FEES======================\n");

     printf("\nThe effective rate is :         %.2lf %\n",effective_rate);
     printf("The commission amount :          %lld Rwf\n",commission_amount);
     printf("The amount remained:            %lld Rwf\n",amount_ramained);
     printf("The amount in USD is :          %.2lf$\n",amount_USD);
     



    return 0;
}