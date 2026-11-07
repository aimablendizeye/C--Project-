
#include<stdio.h>





void input (int arr[],int size) {

}
int total_salary (int arr[],int size) {

}
int avg (int arr[],int size) {

}
int highest (int arr[],int size) {

}


void input(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
       printf("Enter the salary: %d",i+1);

         
    }
}
 int total =0;
int total_salary (int arr[],int size) {

for( int i=0; i<size; i++) {
  total +=arr[i];
  return total;
    }
}

int avg (int arr[],int size) {
    return total/ size;
}


int max;

int  highest (int arr[], int size) {

    max = arr[0];
    for(int i=0; i<size; i++) {
       if ( arr[i]> max){
       max = arr[i];
  }
  return max;
    } 
}