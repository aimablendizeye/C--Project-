
#include <stdio.h>

int main()
{
    for (int student = 1; student <= 5; student++)
    {
        int sum = 0;
        int highest = 0;     // marks are 0-100, so these starting values are safe
        int lowest = 100;

        printf("\n=== Student %d ===\n", student);

        for (int course = 1; course <= 5; course++)
        {
            int mark;
            int valid = 0;

            while (!valid)
            {
                printf("Enter mark for course %d: ", course);
                int result = scanf("%d", &mark);

                if (result == EOF)
                {
                    printf("\nInput ended unexpectedly.\n");
                    return 1;
                }

                if (result == 1 && mark >= 0 && mark <= 100)
                {
                    valid = 1;
                }
                else
                {
                    printf("Invalid mark. Please enter again.\n");
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);   // clear bad input
                }
            }

            sum += mark;
            if (mark > highest) highest = mark;
            if (mark < lowest)  lowest = mark;
        }

        double average = sum / 5.0;

        char grade;
        const char *interpretation;

        if (average >= 90)      { grade = 'A'; interpretation = "Outstanding"; }
        else if (average >= 80) { grade = 'B'; interpretation = "Very Good"; }
        else if (average >= 70) { grade = 'C'; interpretation = "Good"; }
        else if (average >= 60) { grade = 'D'; interpretation = "Satisfactory"; }
        else if (average >= 50) { grade = 'E'; interpretation = "Needs Improvement"; }
        else                    { grade = 'F'; interpretation = "Fail"; }

        printf("\n--- Results for Student %d ---\n", student);
        printf("Total marks : %d\n", sum);
        printf("Average     : %.2f\n", average);
        printf("Highest     : %d\n", highest);
        printf("Lowest      : %d\n", lowest);
        printf("Grade       : %c (%s)\n", grade, interpretation);
    }

    return 0;
}