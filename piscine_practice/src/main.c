#include <stdio.h>
#include <stdlib.h>
#include "piscine.h"





  int main(void)
{
    const char *s = "hello piscine";
    char *dup = ft_strdup(s);

    if (!dup)
    {
        printf("malloc failed\n");
        return 1;
    }

    printf("addresses: original=%p copy=%p\n", (void *)s, (void *)dup);
    printf("original: %s\n", s);
    printf("duplicate: %s\n", dup);

    free(dup);
    return 0;
}
