// WAP to store the data of 3 students. 



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

    // Student 1 : 
    struct student s1;
    s1.roll = 128;
    s1.cgpa = 9.8;
    strcpy(s1.name, "Ansh"); 
    printf("\n");
    printf("Student Name : %s\n", s1.name);
    printf("Student Roll No. : %d\n", s1.roll);
    printf("Student Cgpa : %f\n", s1.cgpa);
    printf("\n");

    // Student 2 : 
    struct student s2;
    s2.roll = 129;
    s2.cgpa = 8.8;
    strcpy(s2.name, "Nehal"); 
    printf("Student Name : %s\n", s2.name);
    printf("Student Roll No. : %d\n", s2.roll);
    printf("Student Cgpa : %f\n", s2.cgpa);
    printf("\n");

    // Student 3 : 
    struct student s3;
    s3.roll = 127;
    s3.cgpa = 9.2;
    strcpy(s3.name, "Tushita"); 
    printf("Student Name : %s\n", s3.name);
    printf("Student Roll No. : %d\n", s3.roll);
    printf("Student Cgpa : %f\n", s3.cgpa);
    printf("\n");

    return 0;
}
