# include <stdio.h>

enum Day {Monday, Tuesday,Wednesday,
  Thursday,Friday,Saturday,Sunday};
  typedef enum button{on,off} Button;
  Button press(Button current);
  void print_button(Button current);

int main(void){
enum Day today = Tuesday;
enum Day yesterday = Monday;
enum Day tomorrow = Wednesday;
printf("today:%d\n",today);
printf("yesterday:%d\n",yesterday);
printf("tomorrow:%d\n", tomorrow);
Button power  = on;
printf("power:%d\n", power);
print_button(power);
power = press(power);
print_button(power);
power = press(power);
power = press(power);
print_button(power);



return 0;

}
Button press(Button currant){
  if (currant == on) return off;
  else if (currant == off) return on;
}


 void print_button(Button current){
  if(current == on) printf("on\n");
  else  if (current == off) printf("Off\n");
 }
