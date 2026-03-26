# include <stdio.h>
# include <math.h>
int main(){
int choice = 0;
float pounds = 0.0f;
float kilo = 0.0f;
printf("Weight conversion calculator\n");
printf("1. kilograms to pounds\n");
printf("2. pounds to kilograms\n");
printf("Enter your choice (1 or 2):");
scanf("%d",&choice);
if(choice == 1){
  printf("Enter the weights in kg:");
  scanf("%f",&kilo);
  pounds = kilo * 2.20462;
  printf("%.2f kilo is %.2f pounds",kilo,pounds);
  //kg to pounds
}
else if (choice == 2){
  printf("Enter the weights in pounds:");
  scanf("%f",&pounds);
  kilo = pounds/2.20462;
  printf("%.2fpounds is equal to %.2f kilo",pounds,kilo);
  //pounds to kg
}
else{
  printf("Invalid choice!Please enter 1 or 2!");
}




  return 0;
}
