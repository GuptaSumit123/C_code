#include<stdio.h>
int main()
{
int a,b,c,d,e,f,ch;
printf("Enter 1st no\n");
scanf("%d",&a);
printf("Enter 2nd no\n");
scanf("%d",&b);
printf("Enter choice 1.add 2.sub 3.mul 4.div\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
c=a+b;
printf("%d",c);
break;
case 2:
d=a-b;
printf("%d",d);
break;
case 3:
e=a*b;
printf("%d",e);
break;
case 4:
f=a/b;
printf("%d",f);
break;
}
return 0;
}