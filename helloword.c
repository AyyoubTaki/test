#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <fcntl.h>
int main(){
     int fd = open ("text.txt",O_WRONLY | O_CREAT ) ;
     write (fd, "hello guys " ,10) ;


   
      return 0;
}