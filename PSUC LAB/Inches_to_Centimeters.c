// Write a C program to Convert Person Height from Inches to Centimeters.
// 	centimeters = inches x 2.54.


#include <stdio.h>

int main() {
    float i , c;
    printf("Enter Height in inches : ");
    scanf("%f", &i);
    c = i * 2.54;
    printf("Height in Centimeters : %f ", c);

    return 0;
}
