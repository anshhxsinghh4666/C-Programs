// Make a system that can store information of ll students, teachers, & staff of your college in the form of structures.



#include <stdio.h>
#include <string.h>

// Structure Declaration : 
typedef struct collegeStudents{
    int roll;
    char name[100];
    float age;
} cls;

typedef struct collegeTeachers{
    int id_num;
    char name[100];
    float age;
} tea;

typedef struct collegeStaff{
    int id_num;
    char name[100];
    float age;
} stf;

// Function Declaration : 
void stu_data(cls stu);
void tea_data(tea tea);
void staff_data(stf staff);

// Structure Call : 
int main() {
    cls cse[10];
    cls cce[10];
    cls ece[10];

    tea cset[10];
    tea ccet[10];
    tea ecet[10];

    stf manage[10];

// Function Call : 
    stu_data(cse[0]);
    tea_data(cset[0]);
    staff_data(manage[0]);

    return 0;
    
}

// Function Definition :
void stu_data(cls stu){
    printf("Enter Data of Student : \n");
    printf("Name : ");
    scanf("%s", &stu.name);
    printf("Age : ");
    scanf("%d", &stu.age);
    printf("Roll No. : ");
    scanf("%d", &stu.roll);
}

void tea_data(tea tea){
    printf("Enter Data of Teacher : \n");
    printf("Name : ");
    scanf("%s", &tea.name);
    printf("Age : ");
    scanf("%d", &tea.age);
    printf("ID Number : ");
    scanf("%d", &tea.id_num);
}

void staff_data(stf staff){
    printf("Enter Data of Staff : \n");
    printf("Name : ");
    scanf("%s", &staff.name);
    printf("Age : ");
    scanf("%d", &staff.age);
    printf("ID Number : ");
    scanf("%d", &staff.id_num);
}


