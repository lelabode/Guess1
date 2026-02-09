# include <unistd.h>
 static void put2(int n)
{
	char c;

	c = (n / 10) + '0';
	write(1, &c, 1);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void ft_print_comb2(void){
  int a;
  int b;
  a =0;
  while(a<=98){
    b = a +1;
    while(b<= 99){
      put2(a);
      write(1, " " , 1);
      put2(b);

    if(!(a == 98 && b == 99)){
      write(1, ", " , 2);
    }
    b++;

  }
  a++;

}
}

int main(){
  ft_print_comb2();
  return 0;

  }
