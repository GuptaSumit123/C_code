
#include <stdio.h>
int main ()
{
    int num1, num2, temp;
    printf("Enter any two number\n:");
    scanf("%d %d",&num1,&num2);
    if(num1 == num2)
        printf("Both are Equal\n");
    else{
        temp = num1 > num2? num1 : num2;
        printf("%d is largest",temp);
    }

  return 0;
}