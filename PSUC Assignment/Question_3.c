// Write a C program that returns a letter grade based on a quiz score. The input will be
// the integer score from a ten-point quiz. The letter grades are assigned by:
// 9-10 “A”, 7-8 “B”, 5-6 “C”, 3-4“D”<3“F” using:
// Switch Case statements



#include <stdio.h>

int main() {
    int m;
    printf("Enter your quiz score: ");
    scanf("%d", &m);

    switch(m){
        case 10:
        case 9:
            printf("Your grade is A.\n");
            break;
        case 8:
        case 7:
            printf("Your grade is B.\n");
            break;
        case 6:
        case 5:
            printf("Your grade is C.\n");
            break;
        case 4:
        case 3:
            printf("Your grade is D.\n");
            break;
        case 2:
        case 1:
        case 0: 
            printf("Your grade is F.\n");
        default:
            printf("Invalid Marks\n");
    }
    return 0;
}