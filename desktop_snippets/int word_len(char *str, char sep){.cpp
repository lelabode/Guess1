int word_len(char *str, char sep){
 int len = 0;
 while(*str !='\0' && *str !=sep){
  str++;
  len++;
 }
 return len:
}
