// WAP to give grades to a student
//      marks<30 is C
//      30<=marks<70 is B
//      70<=marks<90 is A
//      90<=marks<=100  is A+

#include <stdio.h>

int main() {
    float marks;
    printf("Enter the marks: ");
    scanf("%f", &marks);

    if(marks < 30) {
        printf("Grade: C\n");
    } 
    else if(marks >= 30 && marks < 70) {
        printf("Grade: B\n");
    }
    else if(marks >= 70 && marks < 90) {
        printf("Grade: A\n");
    }
    else if(marks >= 90 && marks <= 100) {
        printf("Grade: A+\n");
    }
    else {
        printf("Invalid input\n");
    }
    
    return 0;
}

