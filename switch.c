# include <stdio.h>

int main(){
  char grade;
  printf("Enter a grade:");
  scanf("%c", &grade);



switch(grade){
  case 'A':
     printf("Perfect!");
  break;
  case 'B':
      printf("You did good!");
      break;
  case 'C':
    printf("You did oke!");
    break;
  case 'D':
    printf("At least it's not enough!");
    break;
  case 'F':
     printf("You failed!");
     break;
  default:
  printf("Please enter only vaild grades");


}



  return 0;
}
