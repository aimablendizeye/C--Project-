#include<stdio.h>
#include<string.h>


int main () {
// accessing string 


        // char greeting [] = "Hello world";
        // int length  = strlen(greeting);
        // printf("%s\n",greeting);
        // printf("%d",length);



        // get user input of string 


        // char name [20];
        // printf("Enter your name:");
        // scanf("%s",name);

        // printf("Hello , %s",name);



        // Loop over string 

        // char name [] = "Aimable";
        // int length = strlen(name);

        // int i;

        // for (i =0; i<length; i++){
        //     printf("%c\n",name[i]);
        // }


        // using while loop 



        // char name [] = "Aimable";

        // int i= 0;

        // while (name[i] !='\0') {
        //     printf("%c\n",name[i]);
        //     i++;
        // }



        // array of string 


       // char fruits[3][30] = {"Apple","Banana","Cherry"};


        //string functions 


        // char name [20] = "John";

        // printf("%zu\n",strlen(name));
        // printf("%zu",sizeof(name));


        // sizeof : include also the null challaracterr

        //strcpy  (take the the copy of the another string)


        // Example 

        char original[34]= "Alice";
        char copy[54];

        strcpy(copy,original);

        printf("%s\n",copy);
        printf("%s",original);







    return 0;
}
