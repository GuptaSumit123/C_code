/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include<stdio.h>
int main()
{
    //SCIENCE,MATHS,ENGLISH,COMPUTER,DSA
    int S,M,E,C,DSA;
    printf("enter the marks of the subject\n");
    scanf("%d%d%d%d%d",&S,&M,&E,&C,&DSA);

 if(S>33 || E>33 ||  M>33 ||  C>33 ||  DSA>33 )
 {
    printf("the candidate passed the exam");
 }
 else
 {
    printf("the candidate FAIL the exam");
 }
  if (S>100 || E>100||  M>100||  C>100||  DSA>100)
  {
  printf("wrong number");
  }
 return 0;
}