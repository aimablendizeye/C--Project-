

# include<stdio.h>
# include <math.h>
# include <stdbool.h>

int main () {
   
//   bool is_Student = false;

//   (is_Student == 1)? printf("Yes"): printf("no");


// comma separetor and comma operator 

// week 5 exercises 

// int a=1, b=6, c=3;

// int i = (a, b);

// int x = 4 , y = 10;

// printf("%d", (y++, x++));

//printf("%d",i);


// if statement 

// Ex 1


// int age = 19;

// if (age >= 18) {
//     printf("You are eligible to vote");
// }



// EX 2

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






}