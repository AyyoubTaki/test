#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
    char name[15];
    float grade;
    int age;
};
    int main (){

        struct Student student1 ;
         student1.age = 25;
         student1.grade = 15.33;
         strcpy(student1.name,"ayoub taki");
printf("my name is %s I am %d years old i get %.2f in math exam"  ,student1.name,student1.age,student1.grade);
        return 0;
    } 
     

