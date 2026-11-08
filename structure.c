
#include<stdio.h>
#include<string.h>


struct  Students {
  int id;
  char name[20];
  int age;
  int marks;
};


int main () {

  struct Students s1,s2;

printf("Students information 1\n");
  printf("Enter your Id:");
  scanf ("%d",&s1.id);
  printf("Enter your name:");
  scanf ("%s",s1.name);

  printf("Enter your age:");
  scanf ("%d",&s1.age);

  printf("Enter your marks:");
  scanf ("%d",&s1.marks);

printf("Student information 2\n");
  
  printf("Enter your Id:");
  scanf ("%d",&s2.id);
  printf("Enter your name:");
  scanf ("%s",s2.name);

  printf("Enter your age:");
  scanf ("%d",&s2.age);

 printf("Enter your marks:");
  scanf ("%d",&s2.marks);

 

  printf("Id :%d\n",s1.id);
  printf("His name is :%s\n",s1.name);
  printf("His name is :%d\n",s1.age);
  printf("His name is :%d\n",s1.marks);

 


  printf("Id :%d\n",s2.id);
  printf("His name is :%s\n",s2.name);
  printf("His name is :%d\n",s2.age);
  printf("His name is :%d\n",s2.marks);
  



    return 0;
}
  

