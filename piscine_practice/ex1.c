# include <stdio.h>

enum Day {Mo,Tue,Wed,Thur,Fri,Sat,Sun};
typedef enum button{On, Off}Button;
Button press(Button currant);
void print_button(Button currant);


int main (void){
enum Day today = Tue;
enum Day yesterday = Mo;
enum  Day tomorrow = Wed;
printf("Yesterday: %d\n", yesterday);
printf("today: %d\n",today);
printf("tomorrow : %d\n", tomorrow);
Button power = On;
printf("power %d\n",power);
print_button(power);
print_button(power);
power = press(power);
power = press(power);
print_button(power);


  return 0;
}
Button press(Button currant){
  if(currant == On) return Off;
  else if (currant == Off) return On;
}


void print_button(Button currant){
  if (currant == On) printf("On\n");
  else if(currant == Off)printf("Off\n");
}
