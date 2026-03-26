# include <stdio.h>
# include <string.h>
# include <ctype.h>
int my_strcmpi(const char *s1, const char *s2){
  while(*s1!=*s2){
    char c1 = tolower((unsigned char)*s1);
    char c2 = tolower((unsigned char)*s2);
    if(c1!=c2){
      return c1-c2;
    }
     s1++;
  s2++;
  }
  return tolower((unsigned char)*s1)-tolower((unsigned char)*s2);
}
int main(){
  char str1[]="Martin";
  char str2[]="Born";
  int result = my_strcmpi(str1,str2);
  if(result == 0){
    printf("the same\n");
  }
  else{
    printf("Not the same\n");
  }
  printf("%d",result);
  return 0;
}
