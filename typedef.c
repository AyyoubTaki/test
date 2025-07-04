#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[25] ;
    char nickname[25];
    int id ;


} chihad; // typedef = reserved keyword that gives an existing datatype a "nickname"


int main()
{

chihad chihad1 = { "mohamed","med" ,1111};
chihad chihad2 = { "moha","simo" ,122211};

printf("%s\n" ,chihad1);
printf("%s",chihad1.nickname);
printf("%d",chihad1.id);
return 0 ;
}