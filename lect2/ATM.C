#include <stdio.h>
int main()
{
    int widraw,balance=10000,deposit,choice;
    printf("welcome\n");
    printf("1 check balance\n 2 widraw\n 3 deposit\n ");
    scanf("%d",&choice);
    switch(choice)
    { 
        case 1:
        printf("your current balance is : %d",balance);
        break;
        case 2:
        printf("enter amount:");
        scanf("%d",&widraw);
        if(balance>=widraw){
        balance=balance-widraw;
        printf("  transaction successfull\n your current balance is : %d",balance);
        }else { 
            printf("balance insufficient");
        }
        break;
        case 3:
        printf("enter amount to deposit:");
        scanf("%d",&deposit);
        balance=balance+deposit;
        printf(" deposition successfull\n your current balance is :%d",balance);
        break;
        default:
        printf("invaid choice");
        break;
    }


    return 0;
}

