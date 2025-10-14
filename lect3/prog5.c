#include<stdio.h>
int main()
{ 
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    switch (num)
    { 
        case 1:
        printf("hello");
        break;
        case 2:
        printf("bye");
        break;
        default:
        printf("tata");
        break;
    }
}