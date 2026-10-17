
#include<stdio.h>
#include<string.h>




//  Happy birthy Function 



// void happy (int age, float price) {
//     printf("Happy birthday you are %d , you should get a gift that cost: $%.2f" , age,price);
//}


// calculate function



void calculate (int a, int b , char name [30]) {
    printf("%d your name is : %s" , a + b, name);
}



int main () {

    int a  = 0;
    int b  = 0;
    char name [30] = "";

    printf("Enter the first number:");
    scanf ("%d",&a);

    printf("Enter the second number:");
    scanf ("%d",&b);

    printf("Enter your name :");
    // fgets(name, sizeof(name), stdin);
    // name[strlen(name) - 1] = '\0';
    scanf ("%s",name);

   calculate(a,b, name);

    return 0;
}


float calculator (float a, float b, char operator) {
  if (operator == '-'){
    return a - b;

  }
  else if (operator == '+') {
    return a + b;
  }
  else if (operator == '*') {
    return a * b;
  }

  else {
    return a /b;
  }

    
}


int main (void) {


 float result = calculator(4,6,'+');
 printf("%f",result);


    return 0;

}