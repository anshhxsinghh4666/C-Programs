// Write a program to take 3 student marks in 5 subjects. Print the total marks of each student and the average marks of each subject.


#include <stdio.h>

int main() {
    int arr[3][5];

    for(int i=0; i<3; i++){
    printf("Enter Marks of Student %d : \n", i+1);
    for(int j=0; j<5; j++){
        printf("Subject %d : ", j+1);
        scanf("%d", &arr[i][j]);
        }
    }
    
    int sum = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            sum += arr[i][j];
        }
        printf("Student %d : \n", i+1);
        printf("Total Marks : %d \n", sum);
        printf("Average Marks : %d \n", sum/5);
    }

    return 0;
}

