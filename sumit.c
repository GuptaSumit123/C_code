/*Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main ()
{
    int num,r;
    printf("Enter a number ");
    scanf("%d",&num);

    while(num>0)
{
    r=num%10;
    printf("76%d",r);
    num=num/10;

}
return 0;

}