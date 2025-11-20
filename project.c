# include <stdio.h>
# include <stdlib.h>
# include <time.h>
 int getComputerChoice ();
 int getUserChoice ();
 void checkWinner(int ComputerChoice, int UserChoice);


 int main(){
  srand(time(NULL));
  printf("PAPER,SCISSOR,ROCK\n");
   int ComputerChoice = getComputerChoice();
    int UserChoice = getUserChoice();

switch(UserChoice){
     case 1:
          printf("You chose Rock\n");
          break;
     case 2:
          printf("You chose Paper\n");
          break;
     case 3:
          printf("You chose Scissors\n");
          break;
}

switch(ComputerChoice){
     case 1:
          printf("Computer chose Rock\n");
          break;
     case 2:
          printf("Computer chose Paper\n");
          break;
     case 3:
          printf("Computer chose Scissors\n");
          break;
}
checkWinner(ComputerChoice,  UserChoice);
  return 0;
 }


   int getComputerChoice(){
        return (rand() % 3) +1;
  }

   int getUserChoice(){
   int choice = 0;
 do{
printf("Choose an option\n");
printf("1. Rock\n");
printf("2. Paper\n");
printf("3. Scissors\n");
printf("Enter your choice :\n");
scanf("%d" , &choice);

 }while(choice <1 || choice >3);
 return choice;
 }
 void checkWinner(int ComputerChoice, int UserChoice){

  if (ComputerChoice == UserChoice){
    printf(" it's a tie!\n");
  }
  else if(( UserChoice ==1 &&ComputerChoice == 3)||
           (UserChoice == 3 && ComputerChoice == 2)||
           (UserChoice == 2 && ComputerChoice == 1))
{
     printf("You Win!\n");
}

else{
       printf("You lose!\n");
   }

}
