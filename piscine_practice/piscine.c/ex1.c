# include <unistd.h>

void ft_ultimate_ft(int *********nbr){
  *********nbr = 42;
}
void ft_putnbr( int nb){
  char c;

  if(nb>=10){
      ft_putnbr(nb/10);
  }
  c = ((nb%10)+'0');
  write(1,&c,1);
}
 int main(void){
  int a;

  int *p1 = &a;
  int**p2 = &p1;
  int ***p3 = &p2;
  int ****p4 = &p3;
  int *****p5 = &p4;
  int ******p6 = & p5;
  int *******p7 = &p6;
  int ********p8 = &p7;
  int *********p9 = &p8;
  ft_ultimate_ft(p9);
  ft_putnbr(a);
  write(1,"\n",1);

return 0;

}
