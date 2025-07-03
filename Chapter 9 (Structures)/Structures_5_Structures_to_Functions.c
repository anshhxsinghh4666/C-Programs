// PASSING STRUCTURE TO FUNCTION : 



#include <stdio.h>
#include <string.h>

// Structure Declaration :
struct student{
    int roll;
    float cgpa;
    char name[100];
};

// Function Decalaration :
void studentInfo(struct student s1);

// Function Call :
int main() {
    struct student s1 = {128, 9.8, "Ansh"};
    
    studentInfo(s1); // Passing the structure s1 to the function studentInfo()

    return 0;
}

// Function Definition :
void studentInfo(struct student s1){
    printf("Student Name : %s\n", s1.name);
    printf("Student Roll No. : %d\n", s1.roll);
    printf("Student CGPA : %f\n", s1.cgpa);
}