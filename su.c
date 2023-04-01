#include<stdio.h>
int main(){
    int a[10];
    int i,sum=0;
    printf("Enter the array number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum of the array is %d",sum);
    return 0;
}