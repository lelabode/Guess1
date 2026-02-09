#include <stdlib.h>

char *ft_itoa(int n)
{
    long nb = n;
    int neg = 0;
    int len = 0;
    char *s;
    long tmp;

    if (nb < 0)
    {
        neg = 1;
        nb = -nb;
    }

    if (nb == 0)
        len = 1;
    else
    {
        tmp = nb;
        while (tmp > 0)
        {
            len++;
            tmp /= 10;
        }
    }

    if (neg)
        len++;

    s = (char *)malloc(len + 1);
    if (!s)
        return NULL;
    s[len] = '\0';

    if (nb == 0)
        s[0] = '0';

    while (nb > 0)
    {
        s[len - 1] = (nb % 10) + '0';
        nb /= 10;
        len--;
    }

    if (neg)
        s[0] = '-';

    return s;
  }
