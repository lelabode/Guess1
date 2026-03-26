# include<stdio.h>
# include <string.h>
# include <ctype.h>
/*void my_strupp(char *s){
  while(*s){
    *s = toupper(*s);
    s++;
  }
}*/
/*void my_strrev(char *s){
  int len = strlen(s);
  for (int i = 0; i <len/2; i++){
    char temp = s[i];
    s[i]=s[len -1 - i];
    s[len - 1 -i]= temp;
  }
}*/
 int my_strcmpi(const char *s1,const char *s2){
  while(*s1 && *s2){
    char c1 = tolower((unsigned char)*s1);
    char c2 = tolower((unsigned char)*s2);
    if(c1!=c2){
      return c1 - c2;
    }
  }
  return tolower((unsigned char)*s1) - tolower((unsigned)*s2);
}

int main(){
char string1 [50] = "Aurela";
char string2 [] = "Bode";
//my_strupp(string1);
//string1[0] = tolower(string1[0]);
//strncat(string1,string2,4);
//strcat(string1,string2);
//strcpy(string1,string2);
//strncpy(string1,string2,2);
 //my_strset(string1,'?');
//my_strnset(string1,'x',2);
//my_strrev(string1);
//int result = strlen(string1);
//int result = strcmp(string1,string2);
//int result = strncmp(string1,string2,1);
int result = my_strcmpi(string1,string2);
if(result==0){
  printf("the strings are the same\n");
}
else{
  printf("The stings are't the same\n");
}


printf("%d",result);
  return 0;
}
