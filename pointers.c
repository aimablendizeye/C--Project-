

#include<stdio.h>

int main () {

    int age = 10;
    int* ptr = &age;

    ptr = &age;

    printf("%d\n",age);
    printf("%p",ptr);




    return 0;

}