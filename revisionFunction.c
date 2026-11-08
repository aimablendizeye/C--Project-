#include<stdio.h>

// Q 1 For entering students marks and finding the total; 

int size = 5;

void input (int arr[],int size) {

    for (int i=0; i<size; i++) {

        int mark;
        int valid =0;


        while (!valid) {
            printf("Enter your marks %d (0-100) :",i+1);
          

            if (scanf("%d", &mark) != 1) {
                printf("Pls print the whole number\n");
                while (getchar() != '\n' );
            } 

            else if (mark < 0 || mark > 100) {
                printf("Mark must be between 0 and 100 , try again!\n");
            }

            else {
                arr[i] = mark;
                valid =1;
            }
        }
    }
}

int total (int arr[],int size) {

    int total =0;

    for (int i=0; i<size; i++ ) {

        total +=arr[i];

    }
    return total;
}


int main () {
     int marks[5];
     input(marks,5);

     int suming = total(marks,5);

     printf("the total marks entered are : %d\n",suming);

     
}