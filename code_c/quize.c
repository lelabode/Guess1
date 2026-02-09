# include <stdio.h>
# include <ctype.h>

int main (){
char questions [][140]= {"1. What year did the C language debut?:",
                         "2. Who has credited with creating C?",
                        "3.What is the predecessor of C?"};

char options [][100] = {"A. 1969", "B. 1972","C.1975", "D.1999",
                         "A. Denis Ritchie", "B.Nikola Tesla", "C.John Carmack", "D.Doc Brown",
                         "A.Objective C", "B.B", "C.C++", "D.D#"};

char answers[3]={'B', 'A','B'};
int numOfQuestions = sizeof(questions)/sizeof(questions[0]);
char guess = 0;
int score = 0;
printf("Quiz game\n");
   for (int i = 0; i < numOfQuestions; i ++){
            printf("%s\n", questions[i]);

      for( int j =(i * 4); j< (i*4) + 4; j++){
            printf("%s\n", options[j]);

    }
printf("Guess:");
scanf(" %c", &guess);

guess = toupper(guess);


  if(guess == answers[i]){
       printf("Correct!\n");
       score++;

}
  else{
     printf("Wrong!\n");
   }
}
printf("*************\n");
printf("Final Score : %d/%d\n", score, numOfQuestions);
printf("**************");
  return 0;
}
