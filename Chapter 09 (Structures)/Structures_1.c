// STRUCTURES : A collection of values of different data types.
//              It is a user defined Datatype

// Synatx : Structure Declaration :
//          struct student{
//          char name[100];
//          int roll;
//          float cgpa;
//          };
//          Structure Call/Use :
//          struct student s1;
//          s1.cgpa = 9.8;

// NOTE : Here struct is a Keyword to tell the compiler that its an structure. student is the name of datatype/structure and s1 is name of variable.
//        So basically for example if we compare from int a then here 'int' is 'struct student' and 'a' is 's1'.
//        Semi-Colone ';' after } is a statement Terminator (Important)

// Structure is an user defined Datatype.

// Check Notepad for More information

#include <stdio.h>
#include <string.h>

// Structure Declaration :
struct student {
    int roll;
    float cgpa;
    char name[100];  // Using Arrays
    char *name_;  // Using Pointers
};

// Structure Call/Use :
int main() {
    struct student s1;
    s1.roll = 128;
    s1.cgpa = 9.8;
    // s1.name = "Nehal"; -> Wrong Syntax (if using Character array) : Check Notepad for Info.
    strcpy(s1.name, "Ansh");  // Check Notepad for Reason
    s1.name_ = "Nehal";  // We can use this if we use string using pointers.

    printf("Student Name : %s\n", s1.name);
    puts(s1.name_);
    printf("Student Roll No. : %d\n", s1.roll);
    printf("Student Cgpa : %f\n", s1.cgpa);

    return 0;
}

// Benefits of Using Structures :
// 1. Saves us from creating to many different variables.
// 2. Good Data Management and Organisation.
