# include <stdio.h>
# include <stdarg.h>
# include <string.h>

int max (int num_args, ...);
void print(char *placeholders, ...);
int main(void){

print("fdfdd",2.1,3,2,4);
print("fffd",2.1,3.2,4.3,4);


  return 0;
}
int max (int num_args, ...){
  va_list args;
  va_start(args,num_args);
  int max = 0;
  for(int i = 0; i < num_args; i++){
     int x = va_arg(args,int);
     if(max == 0) max = x;
     else if (x > max) max = x;

  }
  va_end(args);
  return max;
}
void print(char *placeholders, ...){
int num_args = strlen(placeholders);
va_list args;
va_start(args, placeholders);
for (int i = 0; i < num_args;i++){
  if(placeholders[i]=='d'){
    int x = va_arg(args,int);
    printf("x:%d\n",x);
  }
  else if(placeholders[i] == 'f'){
    double x = va_arg(args,double);
    printf("x:%f\n",x);
  }
}
va_end(args);



}
