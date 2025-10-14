
#include <stdio.h>
#include <string.h>

int main() 
{  
    char password[20];

    printf("enter your password: ");
    scanf("%19s", password);

    if (strcmp(password, "utk@123") == 0) 
    { 
        printf("access granted\n");
    } 
    else 
    { 
        printf("wrong password\ntry another way\n");
    } 

    return 0;
}//this a program to chech wheather a password in correct or not 

