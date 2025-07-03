// WAP to print the Average of 3 Numbers

#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3, sum, average;
    printf("Enter the first number: ");
    scanf("%f" , &num1);
    printf("Enter the second number: ");
    scanf("%f" , &num2);
    printf("Enter the third number: ");
    scanf("%f" , &num3);
    sum = num1 + num2 + num3;
    average = sum / 3;
    printf("The average of three numbers = %f\n", average);

    return 0;
}

