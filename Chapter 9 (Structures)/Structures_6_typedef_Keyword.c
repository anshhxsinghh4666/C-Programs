// typedef KEYWORD : Used to create alias (nickname) for data types

// Syntax : typedef struct NameOfDatatype{
//              int roll;
//              float cgpa;
//              char name[100];
//              } alias; 

// Example : typedef struct ComputerEngineeringStudent{
//              int roll;
//              float cgpa;
//              char name[100];
//              } coe;



#include <stdio.h>
#include <string.h>


// Structure Declaration :
typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
} coe ;  // Here stu is alias for 

// Structure Call/Use : 
int main() {
    coe s1;
    s1.roll = 128;
    s1.cgpa = 9.8;
    strcpy(s1.name, "Ansh");

    printf("Student Name : %s\n ", s1.name);
    return 0;

}
