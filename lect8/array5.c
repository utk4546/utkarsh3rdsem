//to print an aaray by taking input from user 
#include<stdio.h>
int main ()
{ 
    int arr[5];
    int i;
    printf("eneter 5 numbers\n:");
    for(i=0;i<5;i++)
    { 
        scanf("%d",&arr[i]);
    }    
    printf("you entered:");
    for (i = 0; i < 5; i++)
    { 
        printf("%d ",arr[i]);
    
    }
    return 0;
} 

