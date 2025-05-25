#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int a=4;
    int* p=&a;
    *p = 7;
    printf("%d\n",*p)  ;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d",p+1);
    return 0;
}