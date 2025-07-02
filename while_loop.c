#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (){

 /*      int a=1;
       while("%d",a<=10){
             printf("%d\n",a);   
       a++;
       }
          return 0;
*/
char name [25];
printf("what is your name? : ");
fgets(name,25,stdin);
name [strlen(name)-1]='\0';
 while(strlen(name)== 0){
printf("you did not enter your name ");
printf("\nwhat is your name : ");
fgets(name,25,stdin);
name [strlen(name)-1]='\0';
 }

 printf("your name is %s",name);
 return 0;
}