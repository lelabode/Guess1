#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str, char sep);

int main(void)
{
    char **result;
    int i = 0;

    result = ft_split("hello  world  piscine", ' ');
    if (!result)
    {
        printf("ft_split failed\n");
        return 1;
    }

    while (result[i])
    {
        printf("word %d: %s\n", i, result[i]);
        i++;
    }

    i = 0;
    while (result[i])
    {
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}
