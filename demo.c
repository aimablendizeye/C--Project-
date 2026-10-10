

# include<stdio.h>
# include <math.h>
# include <stdbool.h>



//char operator;








//   bool is_Student = false;

//   (is_Student == 1)? printf("Yes"): printf("no");


// comma separetor and comma operator 

// week 5 exercises 

// int a=1, b=6, c=3;

// int i = (a, b);

// int x = 4 , y = 10;

// printf("%d", (y++, x++));

//printf("%d",i);


// if statement 

// Ex 1


// int age = 19;

// if (age >= 18) {
//     printf("You are eligible to vote");
// }



// EX 2

// Temperature conversion 


//   float temp;
//   float fehne;

  
//   printf("Enter the temperature in (C):");
//   scanf("%f",&temp);

//   if (temp < 20) {
//      printf("Today it's too cold!");
//      return 1;
//   }

//   fehne = temp * 9/5 + 32;

//   printf("The temperature in fahrenheit : %.2f",fehne);

 int main () {

    int true_password = 1234;
    int password ;
    

    while (password != true_password) {
         for (int i=1; i<=3; i++) {
             printf("Enter the your Password :");
             scanf("%d",&password);
         }
           
          // printf("Incorrect password try again!");

           if (password == true_password) {
            printf("Access granted");
           }
           
    }

    return 0;
 }