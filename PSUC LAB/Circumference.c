// WAP to find circumference of a circle 


#include <stdio.h>

// Function Decalaration :
void circumference();

// Function Call :
int main() {
    circumference();
    return 0;
}

// Function Definition :
void circumference(){
    float radius;
    printf("Enter Radius of Circle: ");
    scanf("%f", &radius);  
    printf("Circumference of Circle: %.2f\n", 2 * 3.14 * radius);  
}