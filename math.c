/*Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include<stdio.h>
#include<math.h>
int main ()
{
     int a,b,c;
     float x,y;
     printf("Enter a cofficient value X^2, x and constant termn\n");
     scanf("%d %d %d",&a,&b,&c);
      int D;
      D=b*b-4*a*c;
      if(D==0)
      {
      printf("equal roots");
      }

       if(D>0)
      {
        printf("postive number");
      }
       if(D<0)
      {
        printf("negative number");
      }
      x=-b+ sqrt(D)/(2*a);
       y=-b -sqrt(D)/(2*a);
       printf("\n roots are = %f %f",x ,y);

       return 0;
}
