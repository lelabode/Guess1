# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(void){
clock_t tic,toc;
int *array;
tic = clock();
array = malloc(100000 * sizeof(int));
toc = clock();
printf("malloc: %fs\n",
(double)(toc-tic)/
CLOCKS_PER_SEC);
free(array);

array = calloc(100000 , sizeof(int));
toc = clock();
printf("calloc: %fs",
(double)(toc-tic)/
CLOCKS_PER_SEC);
free(array);




  /*srand(time(0));
  int size = 0;

  int *junk;
int *array;
for (int i = 0; i < 1000; i ++){
  size = rand()%16000;
  junk = malloc(size *sizeof(int));
for (int j = 0; j < size; j ++){
    junk[j] = rand();
  }
  free(junk);
}

array = calloc(1000 , sizeof(int));
for(int i = 0; i < 1000; i ++)
printf("%d",array[i]);
free(array);
printf("\n");*/





  return 0;
}
