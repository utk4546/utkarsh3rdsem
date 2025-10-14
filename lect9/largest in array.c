#include<stdio.h>

int main()
{ 
    int arr[5]={2 ,-4 ,-5 ,-6, -8};
    int i;
    int largest=0;
    for(i=0;i<5;i++)
    {
        if(largest<arr[i]){ 
            largest=arr[i];
        } 
    }
    printf("largest = %d",largest);
    return 0;
}