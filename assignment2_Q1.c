#include <stdio.h>
#include <math.h>

int main() {
    float totalInput, feePercent, usdRate;
    int friends;

    long long totalRWF;
    long long feeRWF;
    long long amountAfterFee;
    long long shareRWF;
    long long remainderRWF;

    printf("Enter total airtime amount (RWF): ");
    scanf("%f", &totalInput);

    printf("Enter number of friends: ");
    scanf("%d", &friends);

    printf("Enter service fee percentage (%%): ");
    scanf("%f", &feePercent);

    printf("Enter USD exchange rate (RWF per USD): ");
    scanf("%f", &usdRate);


    if (totalInput < 0 || feePercent < 0 || feePercent > 100 ||
        friends <= 0 || usdRate <= 0) {
        printf("\nInvalid input.\n");
        return 1;
    }

    
    totalRWF = (long long)lround(totalInput);
 
    feeRWF = (long long)lround(totalRWF * feePercent / 100.0);
  
    amountAfterFee = totalRWF - feeRWF;
    shareRWF = amountAfterFee / friends;
    remainderRWF = amountAfterFee % friends;

    // Output
    printf("\n========== AIRTIME SPLIT ==========\n");
    printf("Total amount:              %lld RWF\n", totalRWF);
    printf("Service fee:               %lld RWF\n", feeRWF);
    printf("Amount after fee:          %lld RWF\n", amountAfterFee);
    printf("Number of friends:         %d\n", friends);
    printf("Equal share per friend:    %lld RWF\n", shareRWF);

    printf("Extra coins kept by admin: %lld RWF\n", remainderRWF);

    // Bonus: Convert the individual share to USD
    printf("Share per friend in USD:   %.2f USD\n",
           shareRWF / usdRate);


    return 0;
}