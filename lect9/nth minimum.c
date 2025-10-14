// #include <stdio.h>

// int main() {
//     int arr[100], n, i, j, temp, pos;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter elements: ");
//     for(i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     // Sorting the array (ascending order)
//     for(i = 0; i < n-1; i++) {
//         for(j = i+1; j < n; j++) {
//             if(arr[i] > arr[j]) {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     printf("Enter which minimum (n): ");
//     scanf("%d", &pos);

//     if(pos > 0 && pos <= n)
//         printf("%dth minimum element = %d\n", pos, arr[pos - 1]);
//     else
//         printf("Invalid position\n");

//     return 0;
// }

#include <stdio.h>

int main() {
    int a[10], n, i, j, temp, pos;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter numbers: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Sort array in ascending order
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Enter which minimum (n): ");
    scanf("%d", &pos);

    printf("%dth minimum number = %d", pos, a[pos - 1]);
    return 0;
}
