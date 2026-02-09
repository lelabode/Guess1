# include<unistd.h>

void print_reverse(char *str){
  char *end = str;
  while(*end != '\0'){

    end++;

  }
  end--;
  while(end>=str){
    write(1 ,end, 1);
    end--;
  }

}
