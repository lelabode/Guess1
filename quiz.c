# include <stdio.h>

# include<ctype.h>
int main(){
  char questions [][100]= {"What is the largest planet? ",
                            "What is the hotest planet?",
                            "What planet have the most moons?",
                             "Is the Earth flat?"};

  char options [][100] = {"A.JUPITER\nB.SATURN\nC.URANUS\nD.NEPTUN",
                          "A.Mercury\nB.VENUS\nC.EARTH\nD.SUN",
                          "A.EARTH\nB.MARS\nC.JUPITER\nD.SATURN",
                           "A.YES\nB.NO\nC.MAYBE\nD.SOMETIMES"};
  char answerKey []={'A','B','D','B'};
  char guess = '\0';

  int score = 0;

  int questionsCount = sizeof(questions)/sizeof(questions[0]);
  printf("Quiz game!\n");
  for (int i = 0; i < questionsCount;i++){
     printf("\n%s\n",questions[i]);
     printf("\n%s\n",options[i]);
     printf("Enter your answer:");
     scanf(" %c",&guess);
     guess = toupper(guess);
     if(guess == answerKey[i]){
      printf("Correct!\n");
      score++;
     }
     else{
      printf("Wrong\n");
     }


  }
printf("\nYour score is %d out of %d",score,questionsCount);





  return 0;
}
