# include <stdio.h>
int main(){
  char *ft_strcpy(char *dest, char *src){

char *start = dest;
while(*src !='\0'){
  *src = *dest;
  dest++;
  src++;

}
*dest = '\0';
return start;

}


}
