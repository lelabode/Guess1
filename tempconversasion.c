# include <stdio.h>
# include <ctype.h>
int main(){
char choice = '\0';
float celsius = 0.0f;
float farenheit = 0.0f;
printf("Temperature conversion program!\n");
printf("C. celsius to farenheit\n");
printf("F. Farenheit to celsius\n");
printf("Is the temp in celsius(C) or Farenheit(F)?:");
scanf("%c",&choice);
choice = toupper(choice);
if (choice == 'C'){
  printf("Enter the temp in celsius :");
  scanf("%f",&celsius);
  farenheit = (celsius* 9/5)+32;
  printf("%.1f in celsius is equal to %.1f in farenheit",celsius,farenheit);
}
else if(choice == 'F'){
  printf("Enter the temp in Farenheit:");
  scanf("%f",&farenheit);
  celsius = (farenheit -32)*5/9;
  printf("%.1f in Farenheit is equal to %.1f!",farenheit,celsius);
}
else{
  printf("Invalid choice! please enter (C) or (F)");
}



  return 0;
}
