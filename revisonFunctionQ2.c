
#include<stdio.h> 

 int balance = 6000;

    void input () {
        int amount;
        
          printf("Enter the amount that you want to withdraw:");
          scanf("%d",&amount);

          if (amount <=0 || amount > balance) {
            printf("Invalid amount\n");
          }

    }


int withdraw (int amount) {
     return balance - amount;
}

int main () {
    input ();
    int amount;
    int result = withdraw (amount);
    printf("You remain this amount : %d",result);



    return 0;
}

