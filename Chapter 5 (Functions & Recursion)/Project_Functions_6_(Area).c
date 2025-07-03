// WAF to calculate area of a square , circle , and rectangle.


#include <stdio.h>
#include <math.h>

// Function Declaration :
float square(float s);
float circle(float r);
float rectangle(float a , float b);

// Fuction Call :
int main() {
    float a, b, s, r;

    square(s);
    circle(r);
    rectangle(a,b);

    return 0;
}

// Function Definition :
float square(float s) {
    printf("Enter Side of Square:");
    scanf("%f", &s);
    printf("Area of Square : %f\n", s * s);
}

float circle(float r) {
    printf("Enter Radius of Circle:");
    scanf("%f", &r);
    printf("Area of Circle : %f\n", 22/7 * r * r);
}

float rectangle(float a , float b) {
    printf("Enter Lenght of Rectangle:");
    scanf("%f", &a);
    printf("Enter Width of Rectangle:");
    scanf("%f", &b);
    printf("Area of Rectangle : %f\n", a*b);
}