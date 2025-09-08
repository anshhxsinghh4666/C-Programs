// MULTIDIMENSIONAL ARRAYS : 2D Arrays

// Declare Syntax : 
// int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
// OR
// int arr[][2] = {{1, 2}, {3, 4}, {5, 6}};

// NOTE : It is necessary to mention the number of columns (2nd Dimension) in 2D array otherwise it will give error


// Access Syntax : 
// arr[0][0]  -> 1
// arr[0][1]  -> 2
// arr[1][0]  -> 3
// arr[1][1]  -> 4
// arr[2][0]  -> 5
// arr[2][1]  -> 6


// Check Notepad for More Info



#include <stdio.h>


// Store marks of 2 students in 3 subjects.

int main(){
    int marks[2][3];

    // Student 1 :
    printf("Enter Your Marks : \n");
    printf("Physics :");
    scanf("%d", &marks[0][0]);
    printf("Chemistry :");
    scanf("%d", &marks[0][1]);
    printf("Maths : ");
    scanf("%d", &marks[0][2]);

    // Student 2 :
    printf("Enter Your Marks : \n");
    printf("Physics : ");
    scanf("%d", &marks[1][0]);
    printf("Chemistry : ");
    scanf("%d", &marks[1][1]);
    printf("Maths : ");
    scanf("%d", &marks[1][2]);

    // Student 1 Marks :
    printf("Student 1 Marks : \n");
    for(int i=0; i<3; i++){
        printf("%d\n", marks[0][i]);
    }

    // Student 2 Marks :
    printf("Student 2 Marks : \n");
    for(int i=0; i<3; i++){
        printf("%d\n", marks[1][i]);
    }
    
    return 0;
}
