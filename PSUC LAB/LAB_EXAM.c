// Write a program to take student's name, roll number & 5 subject's marks by using structures and copy the data into another structure variable with the help of pointer


#include <stdio.h>
#include <string.h>

// Define a structure for student data using typedef
typedef struct Student{
    char name[50];
    int rollNumber;
    float marks[5];
} stu;

int main() {
    stu student1, student2;
    stu *ptr1 = &student1, *ptr2 = &student2;

    // Input student data
    printf("Enter student's name: ");
    fgets(ptr1->name, sizeof(ptr1->name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &ptr1->rollNumber);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &ptr1->marks[i]);
    }

    printf("\nOriginal Data (Student 1):\n");
    printf("Name: %s\n", ptr1->name);
    printf("Roll Number: %d\n", ptr1->rollNumber);
    printf("Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, ptr1->marks[i]);
    }

    // Copy data from student1 to student2
    strcpy(ptr2->name, ptr1->name);
    ptr2->rollNumber = ptr1->rollNumber;
    for (int i = 0; i < 5; i++) {
        ptr2->marks[i] = ptr1->marks[i];
    }

    // copied data
    printf("\nCopied Data:\n");
    printf("Name: %s\n", ptr2->name);
    printf("Roll Number: %d\n", ptr2->rollNumber);
    printf("Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, ptr2->marks[i]);
    }

    return 0;
}