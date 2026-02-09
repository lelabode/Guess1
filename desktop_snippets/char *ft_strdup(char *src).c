char *ft_strdup(char *src)
{

 int len =0;

  char *dup;
  char *start;
  while(src[len]!='\0'){
   len++;}
   dup = (char *)malloc(sizeof(char) * (len + 1));

    if(!dup){

        return (NULL);
    }


  start = dup;
  while(*src!='\0'){
    *dup = *src;
   