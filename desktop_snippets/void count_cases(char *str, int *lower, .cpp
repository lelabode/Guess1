void count_cases(char *str, int *lower, int *upper){
   *lower = 0;
  *upper = 0;

  while(*str != '\0'){
    if(*str >='a' && *str <='z'){
      (*lower)++;


    } if(*str >='A' && *str <= 'Z'){

     (*upper) ++;
    }
     str++;
  }


}
