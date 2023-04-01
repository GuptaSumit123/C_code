//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
  int main ()
{
    char ch;
    printf("Enter english letter");
    scanf("%c", &ch);
     if(ch >= 'A' && ch <= 'Z')
     {
       printf("the given alphabet is uppercase %c",ch);
     }
        
     else if(ch >='a' && ch <= 'z');
     {
         printf("the given alphabet is lowercase %c",ch);
     }
       else
     {
        printf("not a english letter %c",ch);
     }
     return 0;
}