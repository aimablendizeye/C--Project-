

# include<stdio.h>

int main () {

 int marks;

printf("Enter your marks:");
scanf("%d",&marks);

if (marks < 0 || marks > 100) {
    printf("Invalid input");
}

else if (marks >=80) {
    printf("Grade A");
}
 else if(marks >=70) {
    printf("Grade B");
}
 else if (marks >=60) {
    printf("Grade C");
}
 else if (marks >=50) {
    printf("Grade D");
}
else {
    printf("You Failed ,You got only: %d",marks);
}

    return 0;
}