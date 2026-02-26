# include <stdio.h>
# include <string.h>

int main (){

char s[] = "some,data ,in, commas";
 char * comma = strrchr(s,',');
 printf("%s\n", comma);
 char *fail = strrchr(s,'@');
 if(fail == NULL)
 printf("Could not find @!\n");




  return 0;
}
