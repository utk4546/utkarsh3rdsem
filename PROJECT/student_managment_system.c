#include <stdio.h>
#include <string.h>

// structure definition
struct student {
    int roll;
    char name[50];
    float marks;
};

// global variables
struct student s[100];
int count = 0;

// function declarations
void addStudent();
void displayStudent();
void searchStudent();

int main() {
    int choice;

    do {
        printf("\n==============================");
        printf("\n STUDENT MANAGEMENT SYSTEM");
        printf("\n==============================");
        printf("\n1. Add Student");
        printf("\n2. Display All Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("\nThank You! Program Ended.");
                break;

            default:
                printf("\nInvalid Choice! Try Again.");
        }
    } while(choice != 4);

    return 0;
}

// function to add student
void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf("%s", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
    printf("\nStudent Added Successfully!");
}

// function to display students
void displayStudent() {
    if(count == 0) {
        printf("\nNo Student Records Found!");
        return;
    }

    for(int i = 0; i < count; i++) {
        printf("\n---------------------------");
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f", s[i].marks);
    }
}

// function to search student
void searchStudent() {
    int r, found = 0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &r);

    for(int i = 0; i < count; i++) {
        if(s[i].roll == r) {
            printf("\nStudent Found!");
            printf("\nName  : %s", s[i].name);
            printf("\nMarks: %.2f", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("\nStudent Not Found!");
    }
}
