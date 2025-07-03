// WAP to take a number (n) from user & output its cube(n*n*n)

#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    float cube = pow(num, 3);
    printf("The cube is: %f", cube);
    return 0;
}