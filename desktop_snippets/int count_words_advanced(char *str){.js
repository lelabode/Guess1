int count_words_advanced(char *str){
  int count =0;
  while(*str !='\0'){
    while(*str == ' ' || *str =='\n' ||*str == '\t'
    ||*str ==',' ||*str == ':' || *str == '.' ||
     *str == ';'){
           str++;
     }
    if(*str!='\0'){
      count++;
    }

  while(*str != ' ' && *str !='\n' &&*str != '\t'
    &&*str !=',' &&*str != ':' && *str != '.' &&
     *str != ';'){
           str++;
  }
}
  return count;
}
