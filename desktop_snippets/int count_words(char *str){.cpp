int count_words(char *str){
  int count = 0;
  while(*str != '\0'){
    while(*str == ' '){
      str++;

    }
    if (*str != '\0'){
      count++;
    }
   while(*str !='\0' && *str != ' ')
   str++;
  }
  return count;
}
