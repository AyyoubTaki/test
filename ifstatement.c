#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numbers(int yi , int xi){
if (yi > xi){
           printf("num %d kbr nmn %d",yi,xi);
    }else {
              printf("num %d kbr nmn %d",xi,yi);
    }
}

int main ()
{
    int a,b;
printf("type a number : ");
scanf("%d",&a);
printf("type secand number : ");
scanf("%d",&b);
    numbers(a,b);
        return 0;
}