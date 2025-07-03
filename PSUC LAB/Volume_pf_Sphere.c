// WAP to Calculate and display volume of sphere


#include <stdio.h>

// Function Decalaration :
void volume();

// Function Call :
int main() {
    volume();
    return 0;
}

// Function Definition :
void volume() {
    float radius, volume;
    printf("Enter Radius : ");
    scanf("%f", &radius);
    volume = (4/3) * 3.14159 * radius * radius * radius;
    printf("Volume of Sphere : %.2f", volume);
}