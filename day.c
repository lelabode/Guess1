# include <stdio.h>
int main(){
char dayOfWeek ='\0';

printf("Enter a day of the week (M,T,W,R,F,S,U):");
scanf("%c",&dayOfWeek);
switch(dayOfWeek){


  case 'M':
      printf("It is monday!");
      break;
   case 'T':
      printf("It is Tuesday!");
      break;

   case 'W':
      printf("t is wednesday!");
      break;
   case 'R':
      printf(" It is thursday");
      break;
   case 'F':
      printf("It is friday");
      break;
   case 'S':
      printf("It is saturday");
      break;
   case 'U':
      printf(" it is sunday");
      break;
   default:
      printf("Please enter a char from (M,T,W,R,F,S,U)");
    }




  return 0;
}
