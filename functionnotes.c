

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



float average (int arr[] , int size) {
    int total = 0;
    for ( int i=0; i<size; i++) {
        total += arr[i];
        
    }
    return total /size ;
} 

int main () {

    int array [5] = {3,5,6,7,8};
    float result = average(array,5);

    printf("average is : %.2f",result);
    





    return 0;
}