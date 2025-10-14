#include <stdio.h>
#include <string.h>  // for strcpy()

struct student {
    char name[20];
    int roll;
    int age;
};  

int main() {
    struct student a;

    strcpy(a.name, "utkarsh"); 
    a.roll = 1355;
    a.age = 18;

    printf("name: %s\n", a.name);
    printf("roll: %d\n", a.roll);
    printf("age: %d\n", a.age);

    return 0;
}
