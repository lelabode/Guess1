# include <stdio.h>
void printAge(int *pAge){
  printf("You are %d years old", *pAge);
}

int main(){

int age = 21;
int *pAge = NULL;
pAge = &age;
//printf("address of age : %p\n", &age);
//printf("value of pAge : %p\n", pAge);
//printf("the value of address is : %d\n", age);
//printf("value of stored address : %d\n", *pAge);
//printf("size of age :%d bytes\n", sizeof(age));
//printf("size of pAge :%d bytes\n", sizeof(pAge));
//uintptr_t addr = (uintptr_t)&age;
//printf("address of age :  0x%lX\n", addr);
//printf("value of age : %d", age);


printAge(pAge);
  return 0;
}
