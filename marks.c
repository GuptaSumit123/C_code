#include<stdio.h>
int main ()
{
    int marks;
    printf("enter a marks (0-100):");
    scanf("%d",&marks);

    if(marks < 30) {
        printf("c\n");
    }
    else if(marks >= 30 && marks < 70) { 
        printf("B\n");
    }
    
else if(marks >= 70 && marks < 90 )
{
    printf("A\n");

}

else if(marks >= 90 && marks <= 100)
{
    printf("A+\n");

}
    else {
        printf( " 0versmart");
    }
return 0 ;
}