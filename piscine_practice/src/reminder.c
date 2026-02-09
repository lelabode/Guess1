# include <stdio.h>
int main(){
  int match;
  int box;
  int size;
  int rest;
  scanf("%d",&match);
  scanf("%d",&size);
  box = match/size;
  rest = match%size;
  printf("%d\n",box);
  printf("%d\n",rest);
  return 0;
}
