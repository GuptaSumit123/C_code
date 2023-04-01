#include<stdio.h>
 int main ()
 {
    int yr;
    printf("enter a years");
    scanf("%d",&yr);
    if(yr%4==0 && yr%400==0)
    {
        printf("leap years %d",yr);

    }
    else if (yr%400==0 && yr%100==00)
    {
        printf("leap  years");
    }
    else
    {
        printf("not leap years");
    }

 }