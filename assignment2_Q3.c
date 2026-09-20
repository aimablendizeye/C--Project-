
#include<stdio.h>


int main (){

    float distance, consumption, fuel_price;
    int tank_capacity;

    float litre_needed,total_cost;
    int fuel_tanks_required;
    float litre_remaining;


    printf("Enter the distance in (KM):");
    scanf("%f",&distance);

    printf("Enter Consumption per liter (L/KM):");
    scanf("%f",&consumption);

    printf("Enter Fuel Price (1L):");
    scanf("%f",&fuel_price);


    if (distance <=0 || consumption <= 0 || fuel_price <=0)  {
        printf("\ninvalid input.\n");

        return 1;
    }
    litre_needed = distance * consumption / 100;
    total_cost = fuel_price * litre_needed;


    printf ("Litres that needed:              %.2f\n",litre_needed);
    printf("Total amount :                   %.2f",total_cost);




    




    return 0;
}