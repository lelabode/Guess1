# include <stdio.h>
# include <ctype.h>
int main (){
char unit;
float temp;

printf("Is the temp in 'F' OR 'C'?");
  scanf("%c",&unit);
  unit = toupper(unit);
  if(unit == 'C'){
    printf("\nEnter the temp  in C :");
    scanf("%f",&temp);
    temp = (temp * 9/5)+32;
    printf("\nthe temp in fiahr is %.1f",temp);
  }
  else if (unit == 'F'){
    printf("\n Enter the temp in Farenheit:");
    scanf("%f",&temp);
    temp = ((temp-32)*5/9);
    printf("The temp in celcius is %.1f",temp);

  }
  else {
  printf(" IS NOT A VALID MEASUREMENT");
  }




  return 0;
}
