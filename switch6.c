#include<stdio.h>

int main()
{
	int number,choice;
	printf("Enter a number to be roundoff, to nearest odd or even");
	scanf("%d,&number");
	switch(choice)
	{
		case 1:
			printf("Rounded off to nearest upper odd");
			number+1;
			break;
		case 0:
			printf("Rounded off to nearest lower even");
			number-1;
			break;
            default :
            printf("exit");
	}
    return 0;
}