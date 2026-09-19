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

    // Input
    printf("Enter total airtime amount (RWF): ");
    scanf("%f", &totalInput);

    printf("Enter number of friends: ");
    scanf("%d", &friends);

    printf("Enter service fee percentage (%%): ");
    scanf("%f", &feePercent);

    printf("Enter USD exchange rate (RWF per USD): ");
    scanf("%f", &usdRate);

    // Validate input
    if (totalInput < 0 || feePercent < 0 || feePercent > 100 ||
        friends <= 0 || usdRate <= 0) {
        printf("\nInvalid input.\n");
        return 1;
    }

    /*
     * Convert the floating-point input to integer RWF.
     * lround() safely rounds to the nearest whole RWF.
     */
    totalRWF = (long long)lround(totalInput);

    /*
     * Calculate service fee using integer arithmetic.
     *
     * feePercent is a float, so we calculate the fee in cents
     * of RWF first, then round to the nearest whole RWF.
     */
    feeRWF = (long long)lround(totalRWF * feePercent / 100.0);

    // Amount remaining after service fee
    amountAfterFee = totalRWF - feeRWF;

    // Equal share for each friend
    shareRWF = amountAfterFee / friends;

    // Remainder after dividing among friends
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

    printf("===================================\n");

    return 0;
}