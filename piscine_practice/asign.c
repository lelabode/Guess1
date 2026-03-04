# include <stdio.h>
# include <stdlib.h>
int main(){
/*int  num =10;
int den = 3;
div_t result = div(num,den);
printf("quot: %d\n", result.quot);
printf(" rem: %d\n",result.rem);*/
long num = 10;
long den = 3;
ldiv_t result = ldiv(num,den);
printf("quot: %ld\n", result.quot);
printf(" rem: %ld\n",result.rem);




  return 0;
}
