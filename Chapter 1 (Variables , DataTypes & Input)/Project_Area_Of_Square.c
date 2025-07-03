// WAP To calculate Area of Square.

#include <stdio.h>
int main()
{
    float side;
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    int area = side * side;
    printf("The area of the square is: %d", area);
    return 0;
}