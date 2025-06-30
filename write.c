#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <fcntl.h>
void ft_put (char c){
    write (1, &c ,1);
}

int main(){
     
    ft_put('a');


      return 0;
}