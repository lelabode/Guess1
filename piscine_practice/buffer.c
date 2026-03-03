# include <stdio.h>
# include <string.h>
int main(){
char buffer[10];
memset(buffer,'a',sizeof(char)*5);
memset(buffer+5,'d',sizeof(char)*5);
for ( int i = 0; i<10; i ++)
printf("%c",buffer[i]);
printf("\n");



  return 0;
}
