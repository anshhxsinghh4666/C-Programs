// Swap Numbers using 3 variables without using arithmetic operators



#include <stdio.h>

int main() {
    int a, b, temp;

    // Input values
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swapping, a = %d, b = %d\n", a, b);

    // Swapping logic using 3 variables
    temp = a;
    a = b;
    b = temp;

    printf("After swapping, a = %d, b = %d\n", a, b);

    return 0;
}