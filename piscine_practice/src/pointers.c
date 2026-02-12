# include <stdio.h>
# include <stdlib.h>
int main(void){
  int *a;
  int length = 0;
  printf("Enter a length :");
  scanf("%d",&length);

  a = malloc(length * sizeof(*a));
  if(a==0){
    printf("malloc failed\n");
  }

  for (int i = 0; i < length; i ++ )
     a[i]= i;

   for (int i = 0; i <length; i ++)


    printf("a[%d]=%d\n", i, a[i]);
   free(a);
  return 0;
}
