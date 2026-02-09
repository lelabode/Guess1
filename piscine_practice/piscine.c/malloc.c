char *ft_strdup(char *src){

      char *dup;
      char *start;
      int len = 0;
      while(src[len]){
        len++;
      }
      dup = (char*)malloc(sizeof(char)*(len+1));
      if(!dup){
        return NULL;
      }
      start = dup;
      while(*src!='\0'){
         *dup = *src;
         src ++;
         dup++;
      }
      *dup = '\0';
      return start;

}
