#include <stdio.h>
#include <string.h>
 


int main(){
char cars[][10]= {"Mustang" , "Corvette" , "Camaro"};

// cars[€] "Tesla";
strcpy(cars[0], "Tesla");
for(int i =0 ; i <4 ;i++){
printf( "%s\n",cars[i]);
}

return 0;
}