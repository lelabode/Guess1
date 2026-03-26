# include <stdio.h>
# include <_string.h>
# include <stdbool.h>

typedef struct{
  char name[50];
  int age;
  double gpa;
  bool isFullTime;
}Student;

void printStudent(Student student);

int main(){
  Student student1 = {"Maria",24,3.5,true};
  Student student2 = {"Marta",22,2.1,true};
  Student student3 = {"Mark", 36, 4.0, false};
  Student student4 = {0};
  strncpy(student4.name,"Martin",6);
  student4.age = 23;
  student4.gpa = 2.4;
  student4.isFullTime = false;
  printStudent(student1);
  printStudent(student2);
  printStudent(student3);
  printStudent(student4);
  return 0;
}
void printStudent(Student student){
  printf("Name: %s\n",student.name);
  printf("Age: %d\n",student.age);
  printf("GPA: %.2f\n", student.gpa);
  printf("Full-Time: %s\n", (student.isFullTime)? "YES" :"NO");
  printf("\n");
}
