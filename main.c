#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>

//  int main() {

//      int  a=5 , e;
    
//       e = a+5;

//      int c=10 , d=12, res;
//      res= c+d;

//      printf ("C plus D is : %d\n" ,res);
//      printf("a is : %d\n ",a);
//     printf ("This is the value of e : %d" , e);

//     char name[30]= "";
//     int quantity ;
//     float uPrice = 10.2;
//     float price ;

//     printf ("Enter The name of your product: ");
//     fgets(name,sizeof(name),stdin);
//     name [strlen(name) -1] = '\0';

    

//     printf ("Enter how many you want: ");
//     scanf ("%d",&quantity);

//     printf("\nWhat product would you like to chose?:%s\n",name);
//     printf("You want  %d %s \n",quantity ,name);
//     printf("The unitPrice is $%.2f\n",uPrice);

//     price = uPrice * quantity;

//     printf("Total price is : $%.2f",price);


//     int x = 5 ;
//     float y =144 ;
//     x = pow (x,4);
//     y = sqrt(y);

//     printf("X is the:%d\n" ,  x);
//     printf ("Y is the :%f" , y);


//     double a=0.0f;
//     double b=0.0f;
//     double c=0.0f;
//     double Area=0.0f;
//     double volume=0.0f;

//     printf ("Enter the value of side a : ");
//     scanf ("%lf" , &a);

//     printf ("Enter the value of side b : ");
//     scanf ("%lf" , &b);

//     printf ("Enter the value of side c : ");
//     scanf ("%lf" , &c);

//     Area= a * b;

//     printf ("\nThe value of area is equal to:%.2lf m2\n" , Area);

//     volume= a * b * c;

//     printf ("The value of area is equal to:%.2lf m3\n" , volume);


//     int year = 0;
//     bool isStudent = true;


//      printf("Enter you age age please: ");
//      scanf ("%d" , &year);
    
//      if (year>= 18 && isStudent) {
//        printf ("You are allowed to enter in a club");
//      }
//      else{
//          printf ("You are too young to Enter this Place ");
//      }

//     }

    // Temperature Convarsion program
 

    // char choice ='\0';
    // float celcius = 0.0;
    // float  ferneit = 0.0;
    
    // printf ("Temperature conversation\n");
    // printf ("C. is for converting into ferneit\n");
    // printf ("While\n");
    // printf("F. is for converting into celcius\n");

    // printf ("Here is the choice  C or F :");
    // scanf("%c", &choice);

    // if (choice == 'C') {
    //     printf ("celcius to ferneit\n");

    //     printf ("Enter the value of temperature in celcius: ");
    //     scanf("%f" , &celcius);
    //     ferneit = celcius *5/9;
    //     printf("The value of ferneit is :%.2f\n" , ferneit);
    //     printf ("Thank you for using this Program");

    // }

    // else if (choice == 'F') {
    //     printf ("ferneit to celcius\n");

    //     printf ("Enter the value of temperature in ferneit: ");
    //     scanf("%f" , &ferneit);
    //     celcius = ferneit +32;
    //     printf("The value of ferneit is :%.2f\n" , celcius);
    //     printf ("Thank you for using this Program");
      
    // }

    // else{
    //     printf ("You Entered The Wrong choice pls try again");
    // }



    //Calculator Program

    // double x =0;
    // double y =0;
    // double res = 0;
    // char sign = '\0';

    // printf (" Enter the value of x : ");
    // scanf ("%lf" , &x);

    // printf (" Enter the value of y : ");
    // scanf ("%lf" , &y);

    // printf ("Choice the Sign You want *,/,+,- : ");
    // scanf (" %c" , &sign);


    // switch (sign) {
    // case '*':
    //     printf ("You chose Multiplication sign\n");
    //     res = x * y;
    //     printf ("The x mulply by y is : %.2lf\n" , res);
    //     break;

    // case '/':
    //  if (y ==0 ) {
    //     printf ("We can't devide by zero");
    //  }
    //   else {
    //     printf ("You chose Division sign\n");

    //     res = x / y;
    //     printf ("The x divide by y is : %.2lf\n" , res);

    //   }
        
    //     break;

    // case '+':
    //     printf ("You chose addition sign\n");
    //     res = x + y;
    //     printf ("The x addition y is : %.2lf\n", res);
    //     break;

    // case '-':
    //     printf ("You chose minus sign\n");
    //     res = x - y;
    //     printf ("The x minus y is : %.2lf\n", res);
    //     break;


    
    // default:
    //     printf ("You chose the wrong sign");
          
    //     break;
    // }


    // Functions 


    // void greet (char name[], int age) {
    //     printf ("\nGood morning  %s !", name);
    //     printf ("\nYou are now %d years old!",age);
    //     printf ("\nGood evenning sir");
    // }

    // int main () {

    //     char name[] = "Madam";
    //     int age = 30;
        
    //      greet(name , age);

    //     return 0;
    // }


    // void happyBirthday (char name [] , int age) {
    //       printf ("\nHappy birth %s\n" , name);
    //       printf ("You are %d years old",age);
    // }
    // int main  (){
    //     char name[] ="Ben";
    //     int age =22; 

    //     happyBirthday(name , age);
    // }




    //Return With c programming

    // Even checking program


//     int checkEven (int num) {
        
//         if (num %2 ==0) {
//             return true;
//        }
//         else {
//            return false;
//          }
//     }

//     int main (){
//        int a =  (79);

//        if (checkEven(a)) {
//           printf ("%d is Even number" ,a);
//        }
//        else {
//          printf ("%d is an odd number ",a);
//        }
       
     
       
//      return 0;
// }


// float add (float x , float y ) {
//      return x + y;
// }

// int main (){
//     float x =4.5;
//     float y =6.4;

//     float result = add (x , y);


//     printf ("%.2f plus %.2f is %.2f\n" ,x ,y, result);
//     printf ("pls try another examples of two numbers");


//     return 0;
// }


// int main () {

    // while (1 == 1){
    //    printf ("pls I need your help");
    // }


//    for (int i=0; i<=10; i++) {

//       if (i==5) {
//         break;
//       }
//        Sleep (1000);
//        printf ("%d\n" ,i);
//    }
     

//    for ( int i=1; i<=5; i++) {
         
//         for ( int j=1; j<=12; j+=2) {
//          printf ("%4d " , i*j);
//      }
//      printf ("\n");
//      }


   

//   srand(time(NULL));

//     int min = 50;
//     int max = 100;


//     int randomNum = (rand() %  (max - min + 1 )) + min;

//     printf ("%d",randomNum);



//    int numbers[] = {10,20,39,40,40};

//    printf ("%d" ,numbers[1]);

  //  char symbl= '*';

  //  for ( char i=1; i<=6; i++) {

  //   for ( char j=1; j<=6; j++) {
        
  //     printf (" %c" , symbl);
  //  }
  //     printf("\n");
  //  }


  // Getting Maximum value in array 


  // int ages[] = {29,30,31,32,56,33,34,35};

  //  int size = sizeof(ages) / sizeof(ages[0]);
  //  int max = ages[0];

  //  for (int i=1; i<size; i++){

  //   if (ages[i] > max) {
  //     max = ages[i];
  //   }
    
  //  }

  //  printf ("The maximum age in an array is : %d " , max);


  // int ages[6]= {0};

  //  for (int i=0; i<6; i++) {
  //      printf ("Enter your age: ");
  //      scanf("%d" , &ages[i]);
  //  }

  //  for (int i=0; i<6; i++){
  //      printf("%d ",ages[i]);
  //  }


  //  char numPad [][3] = {{'1','2','3'}
  //                      ,{'4','5','6'}
  //                      ,{'7','8','9'}
  //                      ,{'+','0','#'}};


  //   for (char i=0; i<4; i++) {
      
  //     for(char j=0; j<3; j++) {
  //       printf ("%c ",numPad[i][j]);


  //     }

  //     printf ("\n");
  //   }


    // int x = 6;
    // int y = 7;

    // int max = x > y? x : y;

    // printf ("%d" , max);

    // int  x = 6;
   

    //  printf ("%d is %s", x , x%2==0? "Even": "Odd");


    //  int age = 21;

    //  printf ("\n%s" , age>18? "Adult" : "Young");



    // typedef struct {
    //   char name [50];
    //   int age ;
    //   float gpa;
    //   bool isFullTime;
    
    // }student;


    // int main (){

    // student student1 = {"Aimable" , 24 ,3.4, false};

    //    printf ("\n%s\n",student1.name);
    //    printf ("%d\n",student1.age);
    //    printf ("%.2f\n",student1.gpa);
    //    printf ("%s\n",student1.isFullTime? "Yes":"No");




    //   return 0;
    // }


    int main (){

        int age = 25;
        printf("%d",age);

      return 0;
    }




  

    
  
  

   

  



  
 


    




    
     

    
        
    
    







    








    



    



//  return 0;
// }

