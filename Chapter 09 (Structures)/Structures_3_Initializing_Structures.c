// INITIALIZING STRUCTURES : Assigning Values to variables in a single line.


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
    struct student s1 = {128, 9.8, "Ansh"}; // Assigne values in the same order as declared in structure declarations
    printf("Name : %s\n", s1.name);
    printf("Roll no. : %d\n", s1.roll);
    printf("Cgpa : %f\n", s1.cgpa);
}
