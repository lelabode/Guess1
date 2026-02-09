char *copy_word(char *str, char sep){
  int i = 0;
  char *word;
  int len;
  len = word_len(str, sep);
  word = (char*)malloc(sizeof(char)*(len +1));
  if(!word){
    return(NULL);
  }
  while(i<len){
    word[i] = str[i];
    i++;
  }
  word[i]='\0';
  return word;




  }
