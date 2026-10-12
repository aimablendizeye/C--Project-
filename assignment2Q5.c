

#include<stdio.h>

int main () {

    int marks;
    int sum = 0;
    float avg =0.0;
    int student;


    for (student =1; student<5; student++) {
        printf("Student %d enter your marks\n",student);      

        for(int course=1; course<=5; course++ ) {
            
         printf ("\ncourse %d Enter your marks :",course);
         scanf("%d",&marks);

         sum+= marks;
       
         
        if (marks <0 || marks >100) {
            printf("Invalid input. Try again!\n");
            return 1;
        }

        }
         printf("\nTotal for student %d is: %d\n",student,sum);        
         
    }

    return 0;
}