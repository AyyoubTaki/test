#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    // array = a data structure that can store many values of the same data type.
int i,j;
    int arr[3][3] = 
    {
        { 1 , 2 , 3}, 
        { 4 , 5 , 6},
        { 7 , 8 , 9}
    };
//printf("%d",arr[1][0]);
for (int i=0; i<3; i++){
for (int j=0 ;j<3 ;j++)
    printf("%d",arr[i][j]);
    printf("\n");
} 

return 0;
}
//test edit