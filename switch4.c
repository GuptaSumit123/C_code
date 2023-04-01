#include<stdio.h>
int main ()
{
    int a,b,c,triangle;
   printf("Enter a number 1.isosceles triangle 2.right angled triangle 3.equilateral triangle\n");
   scanf("%d",&triangle);
   switch(triangle){
   case 1:
   a==b||b==c||c==a;
   printf("isosceles triangle");
   break;
   case 2 :
   a=b^2+c^2;
   printf("right angled triangle");
   break;
   case 3:
   a==b==c;
   printf("equilateral triangle");
   break;
   default:
   printf("Exit");
   }
   return 0;
}
