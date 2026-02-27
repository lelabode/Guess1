# include <stdio.h>
int main(){
char buffer[100];
printf("Enter a :\n");
/*scanf("%[^\n]%*c",buffer);
printf("buffer: %s\n", buffer);
fgets(buffer,100,stdin);
printf("buffer :%s\n",buffer);*/
char c;
int i = 0;
while ((c = getchar())!='\n')
    buffer[i++]= c;
  buffer[i]='\0';
  printf("buffer:%s\n",buffer);




  return 0;
}
