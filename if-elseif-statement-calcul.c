#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float num1,num2;
    char op;

    printf("type first number : ");
    scanf("%f",&num1);
    printf("type op : ");
    scanf(" %c", &op);
    printf("type first number : ");
    scanf("%f",&num2);
  if(op == '+'){

  printf("your resolt is %f + %f = %f",num1,num2,num1+num2);
  }else if(op == '-'){

       printf("your resolt is %f - %f = %f",num1,num2,num1-num2);
  }else if(op =='*'){

       printf("your result is %f * %f = %f",num1,num2,num1*num2);
  }
        return 0;
        
} // tesssssssssssst