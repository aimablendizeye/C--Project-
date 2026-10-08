

# include<stdio.h>


char grading (int marks) {

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

else if (marks >= 40) {
    printf("Grade E");
}

else {
    printf("You Failed ,You got only: %d",marks);
}


}

int main () {

 int letter = grading(60);

printf("%c",letter);


    return 0;
}