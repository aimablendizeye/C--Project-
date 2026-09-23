
#include<stdio.h>
#include <math.h>


int main (){

    float distance, consumption, fuel_price;
    double tank_capacity;

    float litre_needed,total_cost;
    int tanks_required;
    int litre_remaining;


    printf("Enter the distance in (KM):");
    scanf("%f",&distance);

    printf("Enter Consumption per liter (L/KM):");
    scanf("%f",&consumption);

    printf("Enter Fuel Price (1L):");
    scanf("%f",&fuel_price);

    printf ("Enter the tank capacity:");
    scanf("%lf", &tank_capacity);


    if (distance <=0 || consumption <= 0 || fuel_price <=0)  {
        printf("\ninvalid input.\n");

        return 1;
    }
    litre_needed = distance * consumption / 100;
    total_cost = fuel_price * litre_needed;
    tanks_required = (int) (litre_needed / tank_capacity);
    litre_remaining = fmod(litre_needed , tank_capacity);
    



    printf ("Litres that needed:              %.2f\n",litre_needed);
    printf("Total amount :                   %.2f\n",total_cost);
    printf("Total tank required:              %d\n",tanks_required);
    printf("Fuel remaining is :              %d",litre_remaining);




    




    return 0;
}