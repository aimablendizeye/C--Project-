#include <stdio.h>

// 1 

struct Student
{
	int studId;
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student s1;
	
	printf("Enter studentID: ");
    scanf("%d", &s1.studId);
    
    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Info:\n");
    printf("StudentID: %d\n", s1.studId);
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}


// 2

#include <stdio.h>

struct Student
{
    char studId[11];
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student students[3];

    /* Input */
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Enter Student ID: ");
        scanf("%10s", students[i].studId);

        printf("Enter name: ");
        scanf(" %19[^\n]", students[i].name);

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    /* Display */
    printf("\n===== STUDENT INFORMATION =====\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Student ID: %s\n", students[i].studId);
        printf("Name      : %s\n", students[i].name);
        printf("Age       : %d\n", students[i].age);
        printf("Marks     : %.2f\n", students[i].marks);
    }

    return 0;
}


// 3 

#include <stdio.h>

struct Student {
    char name[20];
    int marks;
};

void display(struct Student s)
{
    printf("Name: %s\n", s.name);
    printf("Marks: %d\n", s.marks);
}

int main()
{
    struct Student s1 = {"Justin", 85};

    display(s1);

    return 0;
}