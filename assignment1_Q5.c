

#include<stdio.h>

int main () {

         int total_minutes;
         int hours;
         int minutes;
         int seconds;
         int over_minutes;


         printf("Enter the total minutes:");
         scanf("%d",&total_minutes);

         hours = total_minutes / 60;
         minutes = total_minutes % 60;
         seconds = total_minutes * 60;

        if (minutes <0) {
            printf("Invalid Input\n");
            return 1;
        }

         printf("Hours :%d hrs\n",hours);
         printf("Minutes :%d minutes\n",minutes);
         printf("Seconds :%d seconds \n",seconds);

           if (hours > 6) {
            over_minutes = (total_minutes - 360);
            printf("overtime minutes : %d\n", over_minutes);

            return 1;
         }

     return 0;
}