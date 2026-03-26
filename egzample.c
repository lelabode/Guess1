# include <stdio.h>
# include <ctype.h>
int main (){
char unit;
float temp;
printf("Is the temp in ('F')OR ('C')?:");
scanf("%c",&unit);
unit = toupper(unit);
if(unit =='C'){
  printf("\nEnter the temp in Celsius:");
  scanf("%f",&temp);
  temp = (temp*9/5)+32;
  printf("The temp in Fahrenheit is %f",temp);
}
else if(unit =='F'){
  printf("\nEnter the temp in Fahrenheit:");
  scanf("%f",&temp);
  temp = (temp-32)*5/9;
  printf("The temp in Celsius is %f", temp);
}
else{
  printf("%c is not a valid measurement",unit);
}




  return 0;

}
