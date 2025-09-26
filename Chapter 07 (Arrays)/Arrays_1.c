// ARRAYS : Collection of similar data types stored at contiguous memory locations.

// NOTE : We can't store variables with different datatypes. (Disadvantage)

// Syntax : type NameOfArray[Size of array]
//          int marks[3];
//          char name[8];
//          float price[4];

// Input Syntax : scanf("%d", &marks[0]);
// Output Syntax : printf("%d", marks[0];

// Initialization of Array Syntax : int marks[] = {97, 98, 89};  -> No need to write the size in this syntax.
//                                  int marks[3] = {97, 98, 89}  -> Write if you want to.
// We can use the above syntax want to give input ourselves rather than taking input from the user.

// Zero Based Indexing (Check Notepad for details)

// NOTE : Don't use variables as a size of Array
// Syntax : int* arr = (int*)malloc(variable * sizeof(int));

#include <stdio.h>

int main() {
    // Storing Marks of 3 Students without using Arrays

    int marks1 = 98;
    int marks2 = 91;
    int marks3 = 93;

    printf("Marks 1 = %d\n", marks1);
    printf("Marks 2 = %d\n", marks2);
    printf("Marks 3 = %d\n", marks3);

    // Now Here we are to access marks of 3 students we require 3 different variables.
    // To Avoid that we can use Arrays.  Check Below:
    // return 0;

    // Storing Marks of 3 Students with using Arrays

    int marks[3] = {98, 91, 93};  // Arrays

    printf("%d\n", marks[0]);
    printf("%d\n", marks[1]);
    printf("%d\n", marks[2]);

    // Input & Output
    int marks_[3];

    printf("Physics =");
    scanf("%d", &marks_[0]);

    printf("Chemistry =");
    scanf("%d", &marks_[1]);

    printf("Maths =");
    scanf("%d", &marks_[2]);

    printf("Physics = %d , Chemistry = %d , Maths = %d", marks_[0], marks_[1], marks_[29]);

    // Here we can access marks of 3 students from a single variable 'marks
    return 0;
}
