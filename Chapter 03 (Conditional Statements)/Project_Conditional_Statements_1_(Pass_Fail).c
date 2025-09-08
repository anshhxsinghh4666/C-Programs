// WAP a program to check if a student passed or failed
// marks > 30 is PASS
// marks <= 30 is FAIL

#include <stdio.h>

int main() {
    float marks1;
    printf("Enter marks1: ");
    scanf("%f", &marks1);

    if(marks1 > 30 && marks1 <= 100) {
        printf("Student Passed\n");
    }
    else if(marks1 <= 30) {
        printf("Student Failed\n");
    }
    else {
        printf("Invalid marks1\n");
    }

// OR (Usin Ternery Operator)

    float marks2;
    printf("Enter marks2: ");
    scanf("%f", &marks2);

    marks2 > 30 ? printf("Student Passed\n") : printf("Student Failed\n");

    return 0;
}