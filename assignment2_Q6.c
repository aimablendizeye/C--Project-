

#include<stdio.h>
#include<math.h>

int main () {

         float total_minutes;
         int hours;
         int minutes;
         int seconds;


         printf("Enter the total minutes:");
         scanf("%f",&total_minutes);

         hours = (int)total_minutes / 60;
         minutes = fmod(total_minutes , 60);
         seconds = total_minutes * 60;

        if (minutes <0) {
            printf("Invalid Input\n");
            return 1;
        }

         printf("Hours :%d hrs\n",hours);
         printf("Minutes :%d minutes\n",minutes);
         printf("Seconds :%d seconds \n",seconds);

           if (hours > 6) {
            printf("overtime minutes\n");

            return 0;
         }





    return 0;
}