// Write a program that returns a letter grade based on a quiz score. The input will be the integer score from a ten-point quiz.
// The letter grades are assigned by:
// b. 9-10“A”7-8“B”5-6“C”3-4“D”<3“F”

#include <stdio.h>
int main() {
    int score;
    printf("Enter Score : ");
    scanf("%d", &score);


    switch(score){
        case 1 : 
        case 2 :
            printf("Grade : D");
            break;
        case 3 : 
        case 4 : 
            printf("Grade : C");
            break;
        case 5 :
        case 6 : 
            printf("Grade : B");
            break;
        case 7 : 
        case 8 :
            printf("Grade : A");
            break;
        case 9 :
        case 10 : 
            printf("Grade : A+");
            break;
        default : 
            printf("Invalid Score : ");
    }

    return 0;
}