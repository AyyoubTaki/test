#include <stdio.h>
#include <stdlib.h>
 

int main(){
      int guessnum = 5;
      int num;
      int limit = 0;
      while("%d",num!= guessnum){
        if(limit <= 5){
        printf("guess the number betwin 1 to 5: ");
        scanf("%d",&num);
      
      
        }else{
            printf("you lose");
            break;
        }
        limit++ ;
        if(num ==guessnum){
            printf("you win");
        }
        }
    
    
    
return 0;
        
}