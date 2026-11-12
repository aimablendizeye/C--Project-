

#include<stdio.h>
#include<string.h>


 struct  Students {
    int id;
    char name [20];
    char email; 
    struct Students address;
    
 };
  struct  address {
        char city[20];
        char country[20];
        char street[10];
    };
int main () {

 struct  Students student1;
         student1.id = 244;
        strcpy(student1.name,"Aimable")  ;
        strcpy(student1.address.city,"Kigali");
            
         

 
 
 

 
 

  
    return 0;

}
 
 





