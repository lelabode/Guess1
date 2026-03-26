# include <stdio.h>

int main(){
int numbers []= {10,20,40,60,70,80,90};
char grades [] = {'A','B','C','F'};
char name[] = "Bro Code";
int size = sizeof(numbers)/sizeof(numbers[0]);
for (int i = 0; i < size; i ++){
  printf("%d ", numbers[i]);

}
printf("\n");
for (int i = 0; i < size; i ++){
  printf("%c ", grades[i]);
}
printf("\n");
for (int i = 0; i < size; i ++){
  printf("%c", name[i]);
}





  return 0;
}
