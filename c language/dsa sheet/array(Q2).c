// reverse an array

#include <stdio.h>
int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i=0;i<n;i++){
//         printf("%d \n",arr[i]);
//     }
//     printf("the reverse of arr \n");
//     for(int j=n-1;j>=0;j--){
//         printf("%d ",arr[j]);
//      }
// }


//---------------------------------------------------------------------------------------------------

// reverse in place
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n/2; i++)
    {
        int temp = 0;
        temp=arr[i];
        arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
   } 
    printf("the reversed array is \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}