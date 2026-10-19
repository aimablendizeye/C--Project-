

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



    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        goto even;
    }

    goto odd;

even:
    printf("Number is even\n");
    return 0;

odd:
    printf("Number is odd\n");

    return 0;
}

   

