#include<stdio.h>
int sumdigit(int n);

int main (){
    int sum=0,n;
    printf("enter a number");
    scanf("%d",&n);
    sum=sumdigit(n);
    printf(" %d",sum);
    return 0;

}

int sumdigit(int n){
    int s=0,r;
   while (n!=0)
   {
    r=n%10;
  s=s+r;
   n=n/10;

   }
 return s;
}
