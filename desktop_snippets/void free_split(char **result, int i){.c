void free_split(char **result, int i){
  while(i > 0){
    i--;
    free(result[i]);
  }
  free(result);
}
char **ft_split(char **result, char sep){
  int i = 0;
  char **result;
  int words;
  result = (char **)malloc(sizeof(char*)*(words + 1));
  words = count_words_sep(str,sep);
  if(!result){
    return NULL;
  }
  while(*str!='\0'){
    while(*str == sep){
      str++;
    }
    if(*str!='\0'){
      result[i]=count_word(str,sep);
    }
    if(!result[i]){
      free_split(result,i);
      return NULL;

    }
    i++;
  }
  while(*str !='\0' && *str != sep){
    str++;
  }
  result[i]=NULL;
  return result;
}
