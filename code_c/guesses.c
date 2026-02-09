# include<stdio.h>
#include <stdlib.h>
# include<time.h>
int main(){
const int Min = 0;
const int Max = 100;
int guess = 0;
int guesses = 0;
int answer;
srand(time(0));
answer =(rand()%Max)+Min;

do{
  printf("Enter a guess : ");
  scanf("%d", &guess);
    if(guess > answer){
       printf("Too high! \n");
  }
    else if( guess < answer){
          printf("Too low!\n");
  }
   else{
        printf("Correct!\n");
  }
  guesses++;

}while(guess!= answer);
printf("The answer is : %d\n" , answer);
printf("The guesses is : %d" , guesses);




  return 0;

}
