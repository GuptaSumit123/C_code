#include<stdio.h>
int main (){
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        n%i==0;
        printf(" %d",i);
    }

printf("\n");
return 0;
}