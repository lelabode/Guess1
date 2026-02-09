# include <stdio.h>

int main(){
int numbers[] = {10, 20, 30,40, 50,60,70 };
char grades [] = {'A', 'B', 'C', 'D','F','E'};
char name [] = "Bro Code";
int size = sizeof(name)/sizeof(name[0]);
for (int i = 0; i< size; i++){
  printf("%c\n", name[i]);
}



  return 0;
}
