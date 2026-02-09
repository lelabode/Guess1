# include <stdio.h>
int main (){
int gradeCount;
int grade;
int i;
double aver;
double sum = 0.0;
scanf("%d",&gradeCount);
for(i = 0;i <gradeCount;i++){
 scanf("%d",&grade);
sum+=grade;
}
aver = sum/(double)gradeCount;
printf("%.2lf",aver);




  return 0;
}
