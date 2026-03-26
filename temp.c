# include <stdio.h>
# include <string.h>

int main(){
char item[50]="";
float price = 0.0f;
int quanity = 0;
char currancy = '$';
float total = 0.0f;
printf("What kind of items would you like to buy?");
fgets(item,sizeof(item),stdin);
item[strlen(item)-1]='\0';
printf("What is the price of the item?:");
scanf("%f",&price);
printf("How many of items are you going to buy?:");
scanf("%d", &quanity);
total = price * quanity;
printf("You have bought %d %s/s\n",quanity,item);
printf(" The price is %c%.2f", currancy,total);

  return 0;
}
