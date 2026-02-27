# include <stdio.h>
# include <string.h>
int main(){
char dest[20]= "This is ";
char src[5]= "that ";
 char *c = strcat(dest,src);
 printf("dest:%s\n",dest);

 printf("c: %s\n",c);
 printf("%p\n",dest);
 printf("%p\n",dest);
 printf("%p\n",c);
 char dest2[20]="This and ";
 char src2[5]= "that";
  char *c2 = strncat(dest2,src2,2);
  printf("dest2:%s\n",dest2);






  return 0;
}
