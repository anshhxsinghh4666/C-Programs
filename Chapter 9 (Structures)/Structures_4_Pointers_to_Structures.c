// POINTERS TO STRUCTURES : 

// Syntax : Keep the syntax same as normal pointers just replace the datatypes like int, char etc with struct name. 
//            struct student s1:
//            struct student *ptr;
//            struct student &s1;



#include <stdio.h>
#include <string.h>


// Structure Declaration :
struct student{
    int roll;
    float cgpa;
    char name[100];
};


// Structure Call/Use :
int main() {
    struct student s1 = {128, 9.8, "Ansh"};

    struct student *ptr = &s1;
    printf("Student Name : %s\n", (*ptr).name);
    printf("Student Roll No. : %d\n", (*ptr).roll);
    // *ptr points at all values of s1 and after adding .roll it will specifically points at value of roll no. in s1.  

// Arrow Operator : (*ptr).roll  ------->  ptr->roll
    printf("Student Name : %d\n", ptr->name);
    printf("Student Roll No. : %d\n", ptr->roll);
    printf("Student CGPA : %f\n", ptr->cgpa);
// Use Arrow operator for simplicity of code

}

