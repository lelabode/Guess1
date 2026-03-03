# include <stdio.h>
# include <_string.h>
int main(){
  char c[]= "abcdefghijklmnopqerstvwxyz";
  char d[27];
  memcpy(d,c,sizeof(char)*27);
  printf("d:%s\n",d);
  char e [10];
  memcpy(e,c+8,sizeof(char)*9);
  e[9]='\0';
  printf("e: %s\n",e);



  return 0;
}
