

#include<stdio.h>


int main(){

    int arr[5] = {44,78,89,56,23};
    int i;


    for( i=0; i<5; i++){
        if (arr[i] %2 == 0) {
            goto even;
        }

        goto odd;
    }

    even:
      printf("Even numbers are: %d\n",arr[i]);
    odd:
      printf("odd  numbers are : %d",arr[i]);  


    int number;

    while (1) {

        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);

        if (number == 0) {
            break;

            return 1;
        }

        printf("You entered %d\n", number);
    }

    printf("Program stopped\n");

 return 0;


}