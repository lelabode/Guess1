# include <stdio.h>
# include <string.h>
int main(){
char tweet[] = "This is my @mention!";
 char *mention = strchr(tweet,'@');
 printf("mention: %s\n",mention);
 printf("%p\n",mention);
 printf("%p\n",tweet +11);
 mention[0]='*';
 printf("%s\n",tweet);
 if(strchr(tweet,'#')==NULL)
 printf("strchr returned NULL\n");

  return 0;
}
