// WAP to input student information from a user & enter it to a file 


#include <stdio.h>


int main() {
    FILE *fptr;
    fptr = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/Project_2_(Input_Student_Info).txt" , "a");
    
    if(fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char name[50];
    int roll_no;
    int age;
    printf("Enter Name : ");
    scanf("%s" , name);
    printf("Enter Age : ");
    scanf("%d" , &age);
    printf("Enter Roll No. : ");
    scanf("%d" , &roll_no);
    
    fprintf(fptr, "Name : %s\n" , name);
    fprintf(fptr, "Age : %d\n" , age);
    fprintf(fptr, "Roll Number : %d\n" , roll_no);

    fclose(fptr);


}