# include <stdio.h>
# include <string.h>
int main(){
char s1[]= "3456ABMNBA";
char num[] = "0123456789";
int pos = strspn(s1,num);
printf("pos:%d\n",pos);
char *remaining = (s1+pos);
printf("%s\n",remaining);



  return 0;
}
