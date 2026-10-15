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
    int matrix [2][3] = {
        {1,2,3},
        {4,5,6}
    };

    printf("%d",matrix[1][2]);

    // Mthed 2:  Without inner Braces

    //    int matrix [2][3] = {
    //     1,2,3,4,5,6
    // };

    // Method 3 : Automatic Row size 

    // int matrix [][3] = {
    //     1,2,3,4,5,6
    // };


    // Exercise 1

 printf("\nMatrix:\n");

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}




 