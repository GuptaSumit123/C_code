/*Write a program to check whether a given number is an even number or an odd
number without using % operator.*/
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
      //if((n & 1)==0)
      if(n/2*2==n)

     {
        printf("the given number is  even number");
     }
else{
    printf("the given number is odd number");
}
return 0;
}