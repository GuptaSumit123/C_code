#include<stdio.h>
int main(){
int a[10],i,largest,second;
printf("Enter a number \n");
for(i=0;i<=9;i++) 
{
scanf("%d",&a[i]);
}
if(a[0] > a[1]) {
largest = a[0];
second = a[1];
}
else
{
largest = a[1];
second = a[0];
}
for(i = 2; i<=9; i++) {
if( largest < a[i] )
{
second = largest;
largest = a[i];
}
else if( second < a[i])
{
second = a[i];
}
}
printf("Largest - %d \nSecond - %d \n", largest, second);
return 0;
}