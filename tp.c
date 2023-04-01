#include<stdio.h>
int main ()
{
   int i,a[10];
   printf("Enter a 10 number in array \n");
   for(i=0;i<=9;i++)
   {
      scanf("%d",&a[i]);
      if(a[i]>a[i-1]);
      a[i]!=a[i-1];
   }
   printf("the smallest number of a array is %d",a[i-1]);
   return 0;
}