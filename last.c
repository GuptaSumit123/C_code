#include<stdio.h>
int main ()
{
    int num,digit;
    printf("enter a number of digit");
    scanf("%d",&num);

    digit=num%10;
     printf("Last Digit of %d is: %d", num, digit);
    return 0;

}