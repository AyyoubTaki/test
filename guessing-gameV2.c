#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

const int MIN =1;
const int MAX= 10;
int guess;
int guesses= 0;
int answer;

srand(time(0));// use it for random numbers



answer = (rand() % MAX )+ MIN ;// to generate a random number between MIN & MAX
do {
    printf("entre a guess : ");
    scanf("%d", &guess);
    if(guess > answer){
        printf("too high \n");
    }else if(guess < answer){
        printf("too low \n");
    }else {
        printf("correct you win\n");
    }
     
      guesses++;
}while(guess != answer);

printf ("answer : %d\n",answer);
printf ("guesses: %d\n",guesses);

     return 0;
}//all set 