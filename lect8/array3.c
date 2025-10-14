#include<stdio.h>
int main()
{ 
    int arr[5]={4,5,6,7,8};
    int i;
    for( i=0;i<5;i++)
    { 
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("printing of array elements in  reverse\n ");
    for(int i=4;i>=0;i--)
    { 
        printf("%d ",arr[i]);
    }
    return 0;
}// program to print array in reverse order