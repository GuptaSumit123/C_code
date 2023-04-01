#include<stdio.h>
 struct student
 {
 int roll_no;
 float cgpa;
 char name[30];
 };
 int main(){

  struct student s1={2003052,9.55,"Sumit"};
  printf("roll no %d\n cgpa %0.1f\n Name of student %s\n",s1.roll_no,s1.cgpa,s1.name);
  return 0;
 }