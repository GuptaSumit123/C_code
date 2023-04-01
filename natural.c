#include<stdio.h>
int main ()
{
    int i=1,  n ;
    printf("Enter any number");
    scanf("%d", &n);
    //printf(" %d %d ",i, n);
//for (i=1;i <= n; i++)
while(i<=n)
{
    printf("%d\n", i++);
    
}
return 0;
}