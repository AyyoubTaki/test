#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;
    float temp1;
    printf("\n  (F)or(C)? ");
    scanf("%c",&unit);


    if (unit== 'C'){
        printf("know you are in C ");
        printf("\ncan you enter the temp in F : ");
        scanf("%f",&temp);
        temp1 = ((temp)- 32) / 1.8 ;//(°F - 32) × 5/9
        printf("your temp in C is %.0f",temp1);
       
    }else if(unit=='F'){

        printf("know you are in F ");
        printf("\ncan you enter the temp in C : ");
        scanf("%f",&temp);
        temp1 = ((temp)*(9/5)) + 32 ;
        printf("your temp in F is %.0f",temp1);
    }else{
        printf(" you need to choose F or C ");
    }


}