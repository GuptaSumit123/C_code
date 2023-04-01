#include<stdio.h>
int main ()
{
    int a;
    int *ptr,*ptr1,sqr;
    ptr=&a;
    
    printf("Enter a number \n");
    scanf("%d",ptr);
    sqr=a*a;
    ptr1=&sqr;
    printf("%d",*ptr1);
    return 0;

}