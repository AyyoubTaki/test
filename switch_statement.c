#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char grade  ;
    printf("what is your grad : ");
    scanf(" %c",&grade);
       switch (grade){
       case 'a':
       printf("you are naadi");
     break;
       case 'b':
        printf("you are nas naadi");
           break;
           case 'c':
       printf("you are chwya naadi");
     break;
       default:
       printf("you are msalk");
        break;
       }
   
      return 0;
}