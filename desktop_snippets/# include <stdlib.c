# include <stdlib.h>

char **ft_split(char *str, char sep){
  int i = 0;
  int words;
  char ** result;
  words = count_words_sep(str,sep);
  result = (char **)malloc(sizeof(char *)*(words +1));
  if(!result){
    return NULL;
  }
  while(*str !='\0'){
    while (*str == sep){
      str++;
    }
    if(*str !='\0'){
      result[i]= copy_word(str,sep);
       if(!result[i]){
        free_split(result,i);
        return NULL;
    }
    i++;
    }

    while(*str!='\0' && *str != sep){
    str++;
  }

  }
  result[i]=NULL;
  return result;
}
