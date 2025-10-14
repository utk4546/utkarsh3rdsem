
// find the kth max and min elemt of array (3)

#include <stdio.h>
int main()
{
    int n, temp;
    printf("enter the size of array \n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements \n");
    for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
    }
    int k;
    printf("enter the value of k\n");
    scanf("%d", &k);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int kth_min=arr[k-1];
    int kth_max=arr[n-k];

    printf("%d minimum element is %d\n" ,k ,kth_min);
    printf("%d maximum element is %d\n",k,kth_max);
    return 0;
}
