// WAP to calculate Area & Perimeter of a rectangle. Take side a & b from the user.

#include <stdio.h>
int main()
{
    float sideA;
    printf("Enter the length of side A: ");
    scanf("%f", &sideA);
    float sideB;
    printf("Enter the length of side B: ");
    scanf("%f", &sideB);

    float area = sideA * sideB;
    float perimeter = 2 * (sideA + sideB);

    printf("Area of the rectangle is: %f\n", area);
    printf("Perimeter of the rectangle is: %f", perimeter);
    return 0;
}