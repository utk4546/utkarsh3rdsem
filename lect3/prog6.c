#include<stdio.h>
int main()
{ int num;
    printf("enter day number ");
    scanf("%d",&num);
    switch (num)
    { 
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("thudrsday");
        break;
        case 5:
        printf("friday");
        case 6:
        break;
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("invalid choice");
        break;

    }    
    return 0; 
}