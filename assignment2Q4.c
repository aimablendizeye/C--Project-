
#include <stdio.h>

int main()
{
    int lightCode;
    int hour;

    printf("Enter the light code (1, 2, 3): ");
    if (scanf("%d", &lightCode)  < 1 || lightCode > 3)
    {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter the hour (0-23): ");
    if (scanf("%d", &hour)  < 0 || hour > 23)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (hour >= 0 && hour <= 4)
    {
        printf("Blinking Yellow\n");
    }
    else
    {
        switch (lightCode)
        {
            case 1:
                printf("Stop\n");
                break;
            case 2:
                printf("Get Ready\n");
                break;
            case 3:
                printf("Go\n");
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }

    return 0;
}

