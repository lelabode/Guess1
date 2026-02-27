# include <stdio.h>
# include <string.h>
int main(){
  char s[]= "ABCDEFGHM123456789";
  char num []= "0123456789";

 char init = strcspn(s,num);
 printf("%d\n", init);
 char *numcode = s+init;
 printf("%s\n", numcode);
  return 0;
}
