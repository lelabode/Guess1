# include<stdio.h>
# include<string.h>
int main(){
char s1[]= "Thia is the way.";
char s2[] = "This is the way.";
if(strcmp(s1,s2) == 0){
  printf("strings are equal");
}
  else if(strcmp(s1,s2)<0){
    printf("s1<s2\n");
  }
  else if(strcmp(s1,s2)>0){
    printf("s1>s2\n");
  }
 







  return 0;
}
