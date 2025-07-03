#include <stdio.h>
#include <stdlib.h>

// continue =skips rest of code & forces the next iteration of the loop
// break = exits a loop/switch


int main(){

for (int i=1 ;i<=20; i++)
{
    if(i == 13)
{
   continue; 

}
    printf("%d\n",i);
}

return 0;

}