
#include <stdio.h>
#include <stdbool.h>


int age_checking (int age) {

if(age > 18) {
    return age + 1;
}
else {
    return age;
}
}

int main () {

    int newAge  = age_checking(34);
  
   printf("%d",newAge);


    return 0;
}