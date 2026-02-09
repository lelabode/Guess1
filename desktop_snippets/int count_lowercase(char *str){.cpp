int count_lowercase(char *str){
  int count = 0;
  while(*str!='\0'){
    if(*str >='a' && *str<='z'){
      count++;

    }
    str++;
  }

  return count;
}
