int count_words_sep(char *str, char sep){
 int count = 0;

while(*str!='\0') {
  while(*str == sep)
  str++;
  if(*str!='\0'){
    count++;
  }
while(*str !='\0' &&*str!=sep){
  str++;
}

}
return count;
}
