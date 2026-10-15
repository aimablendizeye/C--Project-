
#include<stdio.h>

int main () {
   int correct_password = 1234;
   int password;


   while (password != correct_password) {
    printf("Enter the password:");
    scanf("%d",&password);

    for (int attempt=1; attempt<=3; attempt++) {
        if(password != correct_password) {
            printf("Incorrect password . you have %d left",attempt);
        }
        else {
            printf ("Access granted");
        }
    }
   }

    return 0;
}