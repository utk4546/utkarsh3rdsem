#include <stdio.h>
int bsearch()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int t = 5;
    int s = 0;
    int e = 5;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (mid == t)
        
            // printf("%d",mid);
            return mid;
        
        else if (arr[mid] < t)

            s = mid + 1;

        else
            e = mid - 1;
    }
   return 0;
} 
int main()
{
    int data = bsearch();
    printf("%d", data);
}