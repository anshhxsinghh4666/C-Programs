// WAP to find Sum of 2 numbers.

#include <stdio.h>
int main()
{
    int num1;
    printf("Enter Num1 : ");
    scanf("%d", &num1);
    int num2;
    printf("Enter Num2 : ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("Sum = %d\n", sum);

    // OR

    printf("Sum = %d", num1 + num2);

    return 0;
}
