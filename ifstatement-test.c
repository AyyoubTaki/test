#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// && .lawla ou tanya = pass
// || .ama lawla wla tanya ....whda fihom= pass
//  !  .not 
    int main (){
       int age ;
       char licens[5];
       char jawb[5]="no";
       printf("this is your car \n");
       printf("type your age : ");
       scanf("%d",&age);
       printf("do you have licenss sir yes/no : ");
       scanf("%s",&licens);
       if (age >= 18 && strcmp (licens,jawb)){
            printf("you can drive");
       }else{
            printf("sir tl3b free fire");
       }

       
        return 0;
    } 
     

