# include <stdio.h>
int main(){
  char operator;
  double num1;
  double num2;
  double result;
  printf("\nEnter an operator (+,-,*,/):");
  scanf("%c",&operator);
  printf("Enter number1: ");
  scanf("%lf", &num1);
  printf("Enter number 2: ");
  scanf("%lf", &num2);
  switch(operator){
    case '+':
         result = num1 +num2;
         printf("The result is %.2lf ",result);
         break;
    case '-':
         result = num1 - num2;
         printf("the result is %.2lf",result);
         break;
    case '*':
         result = num1*num2;
         printf("the result is %.2lf",result);
         break;
    case '/':
         result = num1/num2;
         printf("the result  is %.2lf",result);
         break;
    default:
         printf("%c invalid choice! please enter the operator above",operator);
  }
  return 0;
}
