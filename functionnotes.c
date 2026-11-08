

#include <stdio.h>
#include<math.h>




// userdefined functions 

// Predfined functions 

// Sum of two numbers



// int add (int a , int b){
//     return a + b;
// }

// int main () {
//     printf("Sum : %d\n",add(3,5));
//     printf("%.1f",sqrt(144));


 

// function to calculate the celcius 



// float average (int arr[] , int size) {
//     int total = 0;
//     for ( int i=0; i<size; i++) {
//         total += arr[i];
        
//     }
//     return total /size ;
//} 

void input(int arr[],int size) {
 

for (int i=0; i<size; i++) {
    int marks;
    int val =0;

    while(!val) {

     printf("Enter your marks %d :",i+1);
        
    if(scanf ("%d",&marks) != 1)  {
           printf("Invalid input pls enter the number btn 0 an 100\n");
           while (getchar () != '\n');
        }

    else if  (marks <0 || marks>100){
            printf ("Invalid input\n ");
        }
    else {
            arr[i] = marks;
            val = 1;
        }
  }

       
    }
   
}

  int total =0; 

    int  sum (int arr[],int size) {
        for(int i=0; i<size; i++) {
             total += arr[i];
        }

        return total;
    }

    void display (int arr[],int size) {

        for(int i=0; i<size; i++) {
            printf("student %d got :%d\n",i+1,arr[i]);
        }

    }


int main () {

    int marks[5];
      input(marks,5);
      display(marks,5);

    int result = sum(marks,5);
  


    printf("the total is : %d",result);
    





    return 0;
}