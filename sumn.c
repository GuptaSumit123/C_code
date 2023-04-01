#include<stdio.h>
int Sum(int n);
int main (){
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
     printf("sum is %d", sum(n));
     return 0;
}

int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sum(n-1)+n;
    return sumN;
}