# include <stdio.h>
# include<string.h>
# include<stdbool.h>

typedef struct {
  char name [50];
  int age;
  double gpa;
  bool isFullTime;
}Student;
void printStudent(Student student);

int main(){
  Student student1= {"Tomas",22,3.5,true};
  Student student2 = {"Vincent",21, 3.4, true};
  Student student3 = {"Michael",18,4.0,true};
  Student student4 = {0};
  strncpy(student4.name,"Lisa",4);
  student4.age= 20;
  student4.gpa = 3.5;
  student4.isFullTime= false;
  printStudent(student1);
  printStudent(student2);
  printStudent(student3);
  printStudent(student4);
  return 0;
}
void printStudent(Student student){
  printf("%s\n",student.name);
  printf("%d\n",student.age);
  printf("%.2lf\n",student.gpa);
  printf("%s\n",(student.isFullTime)? "Yes" :"No");
  printf("\n");
}
