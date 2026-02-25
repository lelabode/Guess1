# include<stdio.h>
#define ROWS 2;
# define COLS 3;



int main(){

  int a[ROWS][COLS]= {{1,2,3}
                      {4,5,6}};


    for(int i = 0;i<ROWS;i++)
      for(int j = 0; j < COLS;j++ ){
     printf("Enter a[%d][%d]",i,j);
    scanf("%d" ,&i,&j);

    }



  return 0;
}
