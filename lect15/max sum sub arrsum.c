#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5] = {-1, -2 - 3, -4, -1};
    int maxSum = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        int currSum = ;
        for (int j = i; j < 5; j++)
        {
            currSum += arr[j];
            if (currSum > maxSum)
            {
                maxSum = currSum;
            }
        }
    }
    printf("max=%d", maxSum);
    return 0;
}