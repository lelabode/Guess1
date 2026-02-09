# include <stdio.h>
int main(){
int pop;
double growth;
int result;



scanf("%d",&pop);
scanf("%lf",&growth);
result = pop + (int)(pop * growth / 100);

printf("%d\n",result);



  return 0;
}
