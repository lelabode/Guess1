# include <stdio.h>
void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
// Banking Program!
int choice = 0;
float balance = 0.0f;
printf("Welcome to our bank\n");
do{
  printf("\n Select an option:\n");
  printf("\n1. Check the balance :");
  printf("2.Deposit money:\n");
  printf("3. Withdraw money:\n");
  printf("Exit");
  printf("Enter your choice:\n");
  scanf("%d" , &choice);


}while(choice!=4);


  return 0;
}


void checkBalance(float balance){

}

float deposit(){
  return 0.0;
}
float withdraw(float balance){
  return 0.0;
}
