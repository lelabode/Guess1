#include <stdio.h>

int main(void)
{
    char *s = "hello";
    char *dup = s; // or your duplicated string

    printf("addresses: original=%p copy=%p\n", (void *)s, (void *)dup);

    return 0;
}
