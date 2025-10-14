#include<stdio.h>
int main()
{ 
    int arr[5]={2 ,4 ,-5 ,6, -8};
    int i;
    int smallest=__INT_MAX__;
    for(i=0;i<5;i++)
    {
        if(smallest>arr[i]){ 
            smallest=arr[i];
        } 
    }
    printf("smallest=%d",smallest);
    return 0;
}