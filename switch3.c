#include<stdio.h>
int main(){
    int day;
    printf("Enter the number of day 1 2 3 4 5 6 7\n");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("Have a good monday");
        break;
        case 2:
        printf("hope you are fine");
        break;
        case 3:
        printf("Good bless you");
        break;
        case 4:
        printf("hello");
        break;
        case 5:
        printf("have a good friday");
        break;
        case 6:
        printf("bye bye");
        break;
        case 7:
        printf("Good night");
        break;
        default:
        printf("not valid");
    }
    
return 0;
}
