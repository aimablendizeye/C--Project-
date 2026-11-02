

#include<stdio.h>

void inPutMarks (int marks[],int size) {
    

    while(1) {

        int i;

        for (i=0; i<size; i++) {
        printf("Enter the marks for student %d :",i);
        scanf ("%d",&marks[i]);
      
    }
        if (marks[i] <=100 && marks[i] >= 0 ) {
            break;
        }
      printf ("Enter the valid marks");

    }


}

int main () {

    int marks[5];

    inPutMarks (marks,5);

    for(int i=0; i<5; i++) {
        printf("The Entered marks are %d\n :",marks[i]);
    }
    printf("\n");



    return 0;

}