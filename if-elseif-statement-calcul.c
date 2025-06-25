#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int num1,num2;
    char op;

    printf("type first number : ");
    scanf("%d",&num1);
    printf("type op : ");
    scanf(" %c",&op);
    printf("type first number : ");
    scanf("%d",&num2);
  if(op == '+'){

  printf("your resolt is %d + %d = %d",num1,num2,num1+num2);
  }else if(op == '-'){

       printf("your resolt is %d - %d = %d",num1,num2,num1-num2);
  }else if(op =='*'){

       printf("your resolt is %d * %d = %d",num1,num2,num1*num2);
  }
        return 0;
        
} // tesssssssssssst