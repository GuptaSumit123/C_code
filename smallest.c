//print smallest number
#include<stdio.h>
int main ()
{
    int a,b, min;
printf("enter a 2 number");
scanf(" %d %d", &a,  &b);

//min = a<b ?a:b;
if (a<b)
min=a;
else 
min =b;
printf(" smallest  number = %d", min);
return 0;



}