# include <stdio.h>
int main(){
int box;
int rest;
int size;
int match;
scanf("%d",&match);
scanf("%d",&size);
box = match/ size;
rest = match%size;
printf("%d\n",box);
printf("%d\n",rest);

  return 0;
}
