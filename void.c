#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void sayhi();
int main()
{
    int age1;
    char name1[20];
    printf("what is your name : ");
    scanf("%s",&name1);
    printf("what is your age : ");
    scanf("%d",&age1);

    sayhi(name1,age1);

    return 0;
}

void sayhi(char name[],int age){
printf("hi %s your age is %d",name,age);

}