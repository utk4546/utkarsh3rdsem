//FIND THE MAXIMUM AND MINIMUM ELEMENT IN AN ARRAY

#include <stdio.h>
#include <limits.h>
int main()
{
   int arr[] = {2, 5, 9, 20, 5};
   int n = sizeof(arr) / sizeof(arr[0]);
   int min = __INT8_MAX__;
   int max = INT_MIN;
   for (int i = 0; i < n; i++)
   {
      if (min > arr[i])
      {
         min = arr[i];
      }
      else if (max < arr[i])
      {
         max = arr[i];
      }
   }
   printf("minimum element is %d", min);
   printf("\n");
   printf("maximum element is %d", max);
   return 0;
   //
}