# include <unistd.h>

void ft_swap(int *a, int *b){
int temp;
temp = 0;
temp = *a;
*a = *b;
*b = temp;

}
void ft_putnbr(int nb){
  char c;
  if(nb < 0){
    write(1,"-",1);
    nb = -nb;
  }
  if(nb>=10){
    ft_putnbr(nb/10);
  }
  c = ((nb%10)+'0');
  write(1,&c,1);


}

int main(void){
  int x = 10;
  int y = 42;

    ft_putnbr(x); write(1, " ", 1); ft_putnbr(y); write(1, "\n", 1);
    ft_swap(&x, &y);
    ft_putnbr(x); write(1, " ", 1); ft_putnbr(y); write(1, "\n", 1);
  return 0;
}
