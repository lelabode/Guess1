# include<stdio.h>
int main(){
int bag_weight= 120;
int bag_price = 45;
int bags;
int total;
double amount;
scanf("%lf",&amount);
bags= (int)(amount/bag_weight)+1;
total = bags*bag_price;
printf("%d\n",total);



  return 0;
}
