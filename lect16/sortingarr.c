#include<stdio.h>
int main()
{   
    int n;
    printf("enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of array ");
    for(int i=0;i<n;i++)
    scanf("%d\n",&arr[i]);
    int  temp;
    for(int i=0;i<n-1;i++)
    { 
        for(int j=0;j<n-i-1;j++){ 
            if(arr[j]>arr[j+1])
            { 
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
     
    }
    for (int i=0;i<6;i++){ 
        printf("%d",arr[i]);
    }
    return 0;
}