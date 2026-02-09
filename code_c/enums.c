# include <stdio.h>


enum Day{Mon = 1, Tue =2, Wed = 3,Thur = 4, Fri= 5, Sat = 6,Sun = 7};
int main (){
// eenum = a user defined type of named intiger identifiers
//helps to make program more readable
enum Day today = Sat;
//printf("%d" , today);
if(today == Sat|| today ==Sun){
  printf("It's weekend! Party time!");
}
else{
  printf("I have to work today!(:");
}


  return 0;
}
