

#include<stdio.h>

int main () {

     // Example 1 


    // printf("first\n");

    // goto skip;

    // printf("Second");

    // skip:
    // printf("Third");


    // exercises 2 

   
// int n = 1;
// label:
//  printf("%d ", n);
//  n++;
//  if (n <= 10)
// goto label; 



// Exercise 3


// int i, j;

// for(j=1;j<=6; j++){
//  for(i=1;i<=5; i++){
//  printf("*");
//  }
//  printf("\n");
// }




// Exercise 4 




 int i = 1;

start:
    printf("%d ", i);
    i++;
    if (i <= 5)
        goto start;            // jump back

    printf("\n");
       
    return 0;
}

   

