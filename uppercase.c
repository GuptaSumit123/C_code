/*17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/
#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter a side of a number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
        printf("the triangle is valid");
    }
    else
    {
        
        printf("the triangle is  not valid ");
    }
    return 0;
}