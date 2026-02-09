inresult = malloc(sizeof(char *) * (words + 1));
   if(!result){
    return(NULL);

   }
   return result;




  int count_words_sep(char *str, char sep){
  int count = 0;
  while(*str != '\0'){
    while(*str == sep){
      str++;
    }
    if(*str !='\0'){
      count++;
    }
    while(*str !='\0' && *str!=sep){
      str++;
    }
    }
   return count;
  }
   char **ft_split(char *str, char sep){
   char **result;
   int words;
   words = count_words_sep(str, sep);
   result = malloc(sizeof(char *) * (words + 1));
   if(!result){
    int len=0;
    while(*str!= '\0'&&*str!= sep){
      len++;
      str++;
    }
    return len;

  }  return(NULL);
  inresult = malloc(sizeof(char *) * (words + 1));
   if(!result){
    return(NULL);

   }
   return result;




  int count_words_sep(char *str, char sep){
  int count = 0;
  while(*str != '\0'){
    while(*str == sep){
      str++;
    }
    if(*str !='\0'){
      count++;
    }
    while(*str !='\0' && *str!=sep){
      str++;
    }
    }
   return count;
  }
   char **ft_split(char *str, char sep){
   char **result;
   int words;
   words = count_words_sep(str, sep);
   result = malloc(sizeof(char *) * (words + 1));
   if(!result){
    int len=0;
    while(*str!= '\0'&&*str!= sep){
      len++;
      str++;
    }
    return len;

  }  return(NULL);

   }
    return result;

   }
   int word_len(char *str, char sep){


   }


   
