
#include <stdio.h>

int main()
{
    const int correctPin = 1234;   // the stored PIN
    const int maxAttempts = 3;     // allowed tries
    int attempts = 0;
    int enteredPin;

    while (attempts < maxAttempts)
    {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPin);

        // scanf returns 1 when it successfully reads one integer
        // if (scanf("%d", &enteredPin) != 1)
        // {
        // //     // user typed letters or something invalid: clear the input buffer
        //     while (getchar() != '\n');
        //     enteredPin = -1;   // treat as a wrong PIN
        // }

        if (enteredPin == correctPin)
        {
            printf("Access granted. Welcome!\n");
            return 0;          // PIN correct, leave the program
        }

        attempts++;
        if (attempts < maxAttempts)
        {
            printf("Incorrect PIN. You have %d attempt(s) left.\n",
                   maxAttempts - attempts);
        }
    }

    printf("Account blocked! Too many incorrect attempts.\n");
    return 0;
}