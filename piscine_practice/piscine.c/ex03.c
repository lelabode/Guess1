# include <unistd.h>
void ft_div_mod(int a, int b, int *div, int *mod){
  *div = a/b;
  *mod = a%b;

}
void ft_putnbr(int nb){
char c;
if(nb<0){
  write(1,"-",1);
  nb = -nb;
}
if(nb >= 10){
  ft_putnbr(nb/10);
}
c = (nb%10)+'0';
write(1,&c,1);
}
int main(void){
  int x = 15;
  int y = 4;
  int d;
  int m;
  ft_div_mod(x,y, &d,&m);
  ft_putnbr(d);
  write(1," ",1);
  ft_putnbr(m);
  write(1,"\n",1);
  return 0;


}
