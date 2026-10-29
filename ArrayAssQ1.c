

#include <stdio.h>

int main(void)
{
    // marks[term][student][subject] -> 2 terms, 2 students, 3 subjects

    float marks[2][2][3];
    float termAvg[2][2];
    float overallAvg[2] = {0};
    int t, s, j;

    // 1. Input all marks

    printf("=== Enter Marks ===\n");
    for (t = 0; t < 2; t++) {
        printf("\n--- Term %d ---\n", t + 1);
        for (s = 0; s < 2; s++) {
            for (j = 0; j < 3; j++) {
                printf("Student %d, Subject %d: ", s + 1, j + 1);
                while (scanf("%f", &marks[t][s][j]) != 1 ||
                       marks[t][s][j] < 0 || marks[t][s][j] > 100) {
                
                    printf("  Invalid. Enter a mark between 0 and 100: ");
                }
            }
        }
    }

    // 2. Display data term by term 

    // printf("\n=== Marks Recorded ===\n");
    // for (t = 0; t < 2; t++) {
    //     printf("\nTerm %d\n", t + 1);
    //     printf("%-12s", "Student");
    //     for (j = 0; j < 3; j++)
    //         printf("Subject %-3d", j + 1);
    //     printf("\n");
    //     for (s = 0; s < 2; s++) {
    //         printf("Student %-4d", s + 1);
    //         for (j = 0; j < 3; j++)
    //             printf("%-11.1f", marks[t][s][j]);
    //         printf("\n");
    //     }
    // }

    /* 3. Compute averages */

    for (t = 0; t < 2; t++) {
        for (s = 0; s < 2; s++) {
            float sum = 0;
            for (j = 0; j < 3; j++)
                sum += marks[t][s][j];
            termAvg[t][s] = sum / 3;
            overallAvg[s] += termAvg[t][s];
        }
    }
    for (s = 0; s < 2; s++)
        overallAvg[s] /= 2;

    printf("\n=== Averages ===\n");
    for (s = 0; s < 2; s++) {
        printf("\nStudent %d\n", s + 1);
        for (t = 0; t < 2; t++)
            printf("  Term %d average : %.2f\n", t + 1, termAvg[t][s]);
        printf("  Overall average: %.2f\n", overallAvg[s]);
    }

    return 0;
}



