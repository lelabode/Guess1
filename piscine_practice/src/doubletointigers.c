# include <stdio.h>
int main(){
double money;
double price;
int books;



scanf("%lf",&money);
scanf("%lf",&price);


books = (int)(money/price);


printf("%d",books);

  return 0;
}
