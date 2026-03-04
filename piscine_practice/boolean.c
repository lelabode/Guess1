# include <stdio.h>
# include<math.h>



int main(){
int a = 5;
int b = 2;
printf("%d + %d-> %d\n",a,b,a + b);
printf("%d - %d -> %d\n",a,b,a - b);
printf("%d * %d -> %d\n",a,b,a * b);
printf("%d / %d -> %d\n",a,b,a / b);
printf("%d %% %d -> %d\n",a,b,a % b);
a ++;
printf("a:%d\n",a);
a --;
printf("a:%d\n",a);
++a;
printf("a:%d\n",a);
printf("a++:%d\n",a++);

printf("a:%d\n",a);
printf("++a:%d\n",++a);
double x = 5.0;
double y = 2.0;
printf("%f + %f -> %f\n",x , y, x/y);
double z = pow(x,y);
printf("%f ^ %f -> %f\n",x , y, z);





  return 0;
}
