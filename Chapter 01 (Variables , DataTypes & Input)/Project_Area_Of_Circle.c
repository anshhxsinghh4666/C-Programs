// WAP To calculate Area of Circle

#include <stdio.h>
int main()
{
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = 3.14159 * radius * radius;
    printf("The area of the circle is: %f", area);
}
