#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

void ft_putnbr(int nb)
{
    char c;
    if (nb >= 10)
        ft_putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);
}

int main(void)
{
    int a = 0;

    ft_ft(&a);
    ft_putnbr(a);
    write(1, " ", 1);
    return 0;
}
