#include<stdio.h>

int main () {
 // 1D array 

//     int numbers[] = {1,2,3,4,5,6};
//    // int num = numbers[2];
//    numbers[4]= 76;

//     printf("%d",numbers);

    // MultiDimensions Arrays 

    // Method of initialization 

// Method 1: Full initializations 


    // int matrix [2][3] = {
    //     {1,2,3},
    //     {4,5,6}
    // };

    // printf("%d",matrix[1][2]);

    // Mthed 2:  Without inner Braces

    //    int matrix [2][3] = {
    //     1,2,3,4,5,6
    // };

    // Method 3 : Automatic Row size 

    // int matrix [][3] = {
    //     1,2,3,4,5,6
    // };


    // Exercise 1



//  printf("\nMatrix:\n");

//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }



// Exercises 2 
 // Looping over the element of array 

//   int numbers [] = {3,4,5,67,8};
//   int n = sizeof(numbers) / sizeof(numbers[0]);

//   for (int i=0; i<n; i++){
//     printf("%d\n",numbers[i]);

//   }




// Adding Element into an array 


// int arr[4];

// arr[0] = 23;
// arr[1] = 56;
// arr[2] = 45;
// arr[3] = 89;

// int n = sizeof(arr) / sizeof(arr[0]);

// for (int i=0; i< n; i++) {
//     if (arr[i] %2 == 0) {
//         printf("%d\n",arr[i]);
//     }
    

// }



// Dimention in array 
 // [2] indicate the number of Row
 // [3] indicate the number of column 


// int max[2][3] = {{2,3,4}, {3,5,7}};

// printf("%d",max[1][0]);



// String in the array 


// char name [] = "Aimable Ndizeye";

// printf("%s",name);




//  Accepting user input of different elements 


//   int marks [4]; 
//   int i;

//   for ( i=0; i<4; i++) {
//     printf("Enter the marks:");
//     scanf("%d",&marks[i]);
//   }

//   printf("The marks Entered are:\n");

//   for (i =0; i<4; i++) {
//       printf("%d\n",marks[i]);
//   }

 


  int marks [4] = {40,49,70,70};

  int max = marks[0];
  int min = marks[0];

  for (int i=0; i<4; i++) {
    if(marks[i]> max ){
    max = marks[i];
    }

    if (marks[i] < min){
        min = marks[i];
    }
  }
   

  printf("largest marks:%d\n",max);
  printf("smallest marks:%d\n",min);


  



    return 0;
}




 