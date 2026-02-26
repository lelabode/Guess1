# include <stdio.h>
# include <string.h>

int main(){
 char s[] = "ABCD12345";
 char num[] = "034215";
  char *match = strpbrk(s, num);
  printf("%s\n",match);
  char punct [] = ", ;:";
   char *fail = strpbrk(s,punct);
   if(fail == NULL)
   printf("Could not find! \n");


  return 0;
}
