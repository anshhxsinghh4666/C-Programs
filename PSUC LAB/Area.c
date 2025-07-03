#include <stdio.h>

// Function Declaration :
void square();
void rectangle();
void circle();

// Function Call :
int main() {
    square();
    rectangle();
    circle();
    return 0;
}

// Function Definition :
void square(){
    int side;
    printf("Enter Side of Square: ");
    scanf("%d", &side);  
    printf("Area of Square: %d\n", side * side);
}

void rectangle(){
    int length, breadth;
    printf("Enter Length of Rectangle: ");
    scanf("%d", &length);  
    printf("Enter Breadth of Rectangle: ");
    scanf("%d", &breadth);  
    printf("Area of Rectangle: %d\n", length * breadth);
}

void circle(){
    int radius;
    printf("Enter Radius of Circle: ");
    scanf("%d", &radius);  
    printf("Area of Circle: %.2f\n", 3.14 * radius * radius);  
}