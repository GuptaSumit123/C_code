/*8. Write a program to find the second smallest number in an array.Take array values
from the user.*/
#include<stdio.h>
int main ()
{
    int n;
    printf("enter a array number");
    scanf("%d",&n);
    int a[n];
    printf("Enter a %d number\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
   printf("The smallest second element is %d",a[n-2]);
   return 0;
}