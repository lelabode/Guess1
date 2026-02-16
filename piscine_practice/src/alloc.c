# include <stdio.h>
void add(int a);
void add_array(int array[]);

int main (void){
int x = 5;
add(x);
printf("x:%d\n", x);
int myArray[5] = {1,2,3,4,5};
add_array(myArray);
printf("myArray[0]:%d\n", myArray[0]);
printf("myArray %p",myArray);


  return 0;
}
void add(int a){
  a = a +1;

}
void add_array(int array[]){
  printf("array :%p\n",array);
  array[0]= array[0] + 1;
}
