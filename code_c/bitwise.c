# include <stdio.h>

int main (){

int x = 6;   // x = 00000110
int y = 12;  // y = 00001100
int z = 0;   // z = 00000000
z = x & y;
printf("AND = %d\n", z);
z = x|y;
printf("OR = %d\n", z);
z = x ^ y;
printf("XOR = %d\n", z);
z = x << 1;
printf("SHIFTLEFT = %d\n", z);
z = x << 2;
printf("SHIFTLEFT = %d\n", z);
z = x >> 1;
printf("SHIFT RIGHT = %d\n", z);

  return 0;
}
