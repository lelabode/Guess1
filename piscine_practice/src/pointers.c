# include <stdio.h>
void swap(int *a, int *b);
int main (void){
  int x = 8;
  int y =9;
  printf("x: %d,y: %d\n",x ,y);
  printf("&x %p\n, &y %p\n",& x,&y);
  swap(&x,&y);
  printf("x: %d,y: %d\n",x ,y);

return 0;
}
void swap(int*a,int *b){
  printf("a %p\n,b %p\n", &a,&b);
  printf("*a %d\n *b %d\n",*a,*b);
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
