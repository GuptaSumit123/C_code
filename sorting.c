#include<stdio.h>
int main ()
{
    int n;
    printf("Enter array size \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter a array number \n");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);  
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int temp;
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
  
    printf("%d\n",a[n]);
   
   return 0;
}
