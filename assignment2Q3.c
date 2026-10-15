
#include <stdio.h>

int main()
{
    const int correctPin = 1234;
    const int maxAttempts = 3;
    int attempts = 0;
    int enteredPin = 0;            // start with a value, so it is never undefined

    while (attempts < maxAttempts){

        printf("Enter PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == correctPin){

            printf("Access Granted\n");
            return 0;
        }

        attempts++;
        if (attempts < maxAttempts){
            printf("Wrong PIN. %d attempt(s) remaining.\n", maxAttempts - attempts);
        }
    }

    printf("Account Locked\n");
    return 0;
}