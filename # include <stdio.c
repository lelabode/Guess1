# include <stdio.h>
int main(){
int box;
int match;
int rest;
int size;
scanf("%d",&match);
scanf("%d",&size);
box = match/size;
rest = match%size;
printf("%d\n", box);
printf("%d\n",rest);


  return 0;
}