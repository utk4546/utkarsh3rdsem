#include <stdio.h>
int main() {
    int a = 10;
    int *p;     // pointer declaration
    p = &a;     // store address of a in pointer p

    printf("Value of a = %d\n", a);
    printf("Address of a = %u\n", &a);
    printf("Value stored in p = %u\n", p);
    printf("Value pointed by p = %d\n", *p);
    return 0;
}
