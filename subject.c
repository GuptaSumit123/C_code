#include<stdio.h>
int main ()
{
    int E,M,S,C,N,sum;
    float per;
    printf("enter a number of 5 subject\n");
    scanf("%d%d%d%d%d",&E,&M,&S,&C,&N);
    sum=E+M+S+C+N;
    per=(sum*100)/500;
    printf("%f",per);
    return 0;


}