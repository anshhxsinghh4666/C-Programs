// WAP to calculate a=surface area of sphere


#include <stdio.h>

// Function Decalaration :
void area();

// Function Call :
int main() {
    area();
    return 0;
}

// Function Definition :
void area(){
    int r;
    printf("Surface Area of Sphere : ");
    scanf("%d", &r);
    printf("Surface Area = %.2f", 4 * 3.14159 * r * r);
}