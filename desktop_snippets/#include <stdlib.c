#include <stdlib.h>

int count_words_sep(char *str, char sep)
{
    int count = 0;

    while (*str != '\0')
    {
        while (*str == sep)
            str++;

        if (*str != '\0')
            count++;

        while (*str != '\0' && *str != sep)
            str++;
    }
    return count;
}

int word_len(char *str, char sep)
{
    int len = 0;

    while (*str != '\0' && *str != sep)
    {
        len++;
        str++;
    }
    return len;
}

char *copy_word(char *str, char sep)
{
    int i = 0;
    char *word;
    int len = word_len(str, sep);

    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return NULL;

    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';

    return word;
}

char **ft_split(char *str, char sep)
{
    char **result;
    int words;
    int i = 0;

    words = count_words_sep(str, sep);
    result = (char **)malloc(sizeof(char *) * (words + 1));
    if (!result)
        return NULL;

    while (*str != '\0' && i < words)
    {
        while (*str == sep)
            str++;

        if (*str != '\0')
        {
            result[i] = copy_word(str, sep);
            if (!result[i])
                return NULL; // (later we can free everything properly)
            i++;
        }

        while (*str != '\0' && *str != sep)
            str++;
    }

    result[i] = NULL;
    return result;
}
