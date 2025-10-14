//simple calculater
#include <stdio.h>
int main()
{
    int a, b, result, p;

    printf("Enter the numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Enter operators:\n1:add \n2:sub \n3:mul \n4:div\n");
    scanf("%d", &p);

    if (p == 1) {
        result = a + b;
        printf("Result = %d", result);
    }
    else if (p == 2) {
        result = a - b;
        printf("Result = %d", result);
    }
    else if (p == 3) {
        result = a * b;
        printf("Result = %d", result);
    }
    else if (p == 4) {
        if (b != 0) {
            result = a / b;
            printf("Result = %d", result);
        } else {
            printf("Error: Division by zero!");
        }
    }
    else {
        printf("Invalid choice!");
    }

    return 0;
}
