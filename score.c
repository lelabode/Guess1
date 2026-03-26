# include <stdio.h>
# include <_string.h>

int main(){

char names [3][25] ={0};
printf("Enter a name:");
int rows = sizeof(names)/sizeof(names[0]);
for (int i = 0; i < rows; i++){
fgets(names[i],sizeof(names[i]),stdin);
names[i][strlen(names[0])-1]='\0';
printf("%s\n",names[0]);
}
for (int i = 0; i<rows;i++){
  printf("%s\n",names[i]);
}



  return 0;
}
