// ARRAY OF STRUCTURES : 

// Syntax : struct name[size];
//             -> struct student CSE[100];
//             -> struct student ECE[100];
// Access : CSE[0].roll = 200;
//          CSE[0].cgpa = 9.8;



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
    struct student cse[100];  // to store data of 100 students from cse.
    // Storing Data for 1st student :
    cse[0].roll = 128;  
    cse[0].cgpa = 9.8;
    strcpy(cse[0].name, "Ansh");

    printf("Name: %s\n", cse[0].name);
    printf("Roll No. : %d\n", cse[0].roll);
    printf("CGPA : %f\n", cse[0].cgpa);

    return 0;

}
