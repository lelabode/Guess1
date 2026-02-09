# include <stdio.h>

int main(){
  //int a = 'X';
  //int b = 'Y';
 // int z = 'Z';
  //short a = 'A';
  //short b = 'B';
  //short z = 'C';
//char a = 'X';
//char b = 'Y';
//char c = 'Z';
char a;
char b[2];
char c;
printf("%zu bytes\n", sizeof(a));
printf("%zu bytes\n", sizeof(b));
printf("%zu bytes\n", sizeof(c));
printf("%p\n", &a);
printf("%p\n", &b);
printf("%p", &c);




  return 0;
}
