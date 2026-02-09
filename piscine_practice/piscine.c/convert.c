# include<stdio.h>
int main(){
  int gradeCount;
  int grade;
  int i=0;
  double avarage;
  double sum = 0.0;
  scanf("%d",&gradeCount);

   for(i = 0;i < gradeCount; i++){
    scanf("%d\n",&grade);
    sum+=grade;
  }
  avarage = sum/(double)gradeCount;

  printf("%.2lf",avarage);
  return 0;


}
