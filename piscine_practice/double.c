# include <stdio.h>
# include <math.h>
int main(){
double x = 2.75;
double frac = 0;
double integral = 0;
 frac = modf(x,&integral);
 printf("frac: %f\n", frac);
 printf("integral: %f\n", integral);



  return 0;
}
