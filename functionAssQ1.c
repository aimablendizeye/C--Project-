#include <stdio.h>

#define SIZE 5
#define PASS_MARK 50

void inputMarks(int arr[], int size);
int findTotal(int arr[], int size);
float findAverage(int total, int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int countPass(int arr[], int size);
void displayMarks(int arr[], int size);
const char *classifyPerformance(float average);

void inputMarks(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        int mark;
        int valid = 0;

        while (!valid)
        {
            printf("Enter mark for student %d (0-100): ", i + 1);

            if (scanf("%d", &mark) != 1)
            {
                printf("Invalid input. Please enter a whole number.\n");
                while (getchar() != '\n')
                    ;
            }
            else if (mark < 0 || mark > 100)
            {
                printf("Mark must be between 0 and 100. Try again.\n");
            }
            else
            {
                arr[i] = mark;
                valid = 1;
            }
        }
    }
}

int findTotal(int arr[], int size)
{
    int i, total = 0;
    for (i = 0; i < size; i++)
        total += arr[i];
    return total;
}

float findAverage(int total, int size)
{
    return (float)total / size;
}

int findMax(int arr[], int size)
{
    int i, max = arr[0];
    for (i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int findMin(int arr[], int size)
{
    int i, min = arr[0];
    for (i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int countPass(int arr[], int size)
{
    int i, passed = 0;
    for (i = 0; i < size; i++)
        if (arr[i] >= PASS_MARK)
            passed++;
    return passed;
}

void displayMarks(int arr[], int size)
{
    int i;
    printf("\nEntered marks:\n");
    for (i = 0; i < size; i++)
        printf("Student %d: %d\n", i + 1, arr[i]);
}

const char *classifyPerformance(float average)
{
    if (average >= 70)
        return "Excellent";
    if (average >= 50)
        return "Moderate";
    return "Poor";
}

int main(void)
{
    int marks[SIZE];

    inputMarks(marks, SIZE);
    displayMarks(marks, SIZE);

    int total = findTotal(marks, SIZE);
    float average = findAverage(total, SIZE);
    int highest = findMax(marks, SIZE);
    int lowest = findMin(marks, SIZE);
    int passed = countPass(marks, SIZE);
    int failed = SIZE - passed;

    printf("\nTotal marks: %d\n", total);
    printf("Average mark: %.2f\n", average);
    printf("Highest mark: %d\n", highest);
    printf("Lowest mark: %d\n", lowest);
    printf("Students passed: %d\n", passed);
    printf("Students failed: %d\n", failed);

    if (passed == 0)
        printf("No student passed.\n");
    else if (passed == SIZE)
        printf("All students passed.\n");

    if (highest == lowest)
        printf("All marks are identical.\n");

    printf("Performance: %s\n", classifyPerformance(average));

    return 0;
}