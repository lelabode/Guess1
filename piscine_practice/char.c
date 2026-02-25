# include <stdio.h>
#define ROWS 2
# define COLS 3
# define M 3
#define N 4
# define P 5
void matrix_mult(int c [M][P],
                 int a [M][N],
                int  b[N][P]);
int main(void){
int a[ROWS][COLS]={{1,2,3},
                  {4,5,6}};
for(int i = 0; i < ROWS; i++){
  for(int j = 0; j < COLS; j++){
    printf("Enter a [%d][%d]=\n",i,j);
    scanf("%d",&a[i][j]);
  }
}
for(int i = 0; i < ROWS;i++)
  for(int j = 0; j < COLS; j++)
    printf("a[%d][%d]= [%d]\n", i, j,a[i][j]);
    int A[M][N]= {{1,2,3,4},
                   {4,5,6,7},
                  {7,8,9,0}};
    int B [N][P]= {{1,2,3,4,6},
                   {2,3,4,5,9},
                   {1,2,3,4,2},
                  {2,3,4,5,4}};
    int C[M][P]={{1,2,3,4,5},
                 {2,3,4,5,6},
                 {2,3,4,5,6}};
   matrix_mult(C,A,B);
   printf("\n\n\n");

for(int i = 0; i < M; i++)
  for(int j = 0; j < P; j++)
    printf("C [%d][%d]=%d\n",i,j,C[i][j]);




  return 0;
}
void matrix_mult(int c [M][P],
                 int a [M][N],
                int  b[N][P])
{
  for(int i = 0; i <M;i++)
  for(int j = 0; j< P; j++)
  c[i][j]= 0;

for(int i = 0; i <M;i++)
  for(int j = 0; j< P; j++)
  for(int k = 0; k < N; k++)
  c[i][j]+=a[i][k]*b[k][j];

                }
