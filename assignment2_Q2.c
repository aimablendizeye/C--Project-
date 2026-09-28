#include <stdio.h>

int main() {
    double distance, consumption, fuelPrice, tankCapacity;
    double litersNeeded, totalCost, litersRemaining;
    int fullTanks;

    printf("Enter distance (km): ");
    if (scanf("%lf", &distance) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter consumption (L/100km): ");
    if (scanf("%lf", &consumption) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter fuel price (RWF/L): ");
    if (scanf("%lf", &fuelPrice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter tank capacity (L): ");
    if (scanf("%lf", &tankCapacity) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (distance <= 0 || consumption <= 0 ||
        fuelPrice <= 0 || tankCapacity <= 0) {
        printf("Invalid input. Values must be positive.\n");
        return 1;
    }

    litersNeeded = (distance * consumption) / 100.0;

    totalCost = litersNeeded * fuelPrice;

    fullTanks = (int)(litersNeeded / tankCapacity);

    if (litersNeeded > fullTanks * tankCapacity) {
        fullTanks++;
    }

    litersRemaining = litersNeeded -
                      (fullTanks - 1) * tankCapacity;

    printf("\n--- Trip Fuel Results ---\n");
    printf("Liters needed:       %.3f L\n", litersNeeded);
    printf("Total cost:          %.3f RWF\n", totalCost);
    printf("Full tanks required: %d\n", fullTanks);
    printf("Liters after refill: %.3f L\n", litersRemaining);

    return 0;
}