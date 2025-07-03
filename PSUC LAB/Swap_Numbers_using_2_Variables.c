// Swap Numbers using 2 variables 


#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swapping, a = %d, b = %d\n", a, b);

    // Swapping logic using arithmetic operations
    a = a + b; // Step 1: Add a and b, store in a
    b = a - b; // Step 2: Subtract b from the new a, store in b
    a = a - b; // Step 3: Subtract the new b from the new a, store in a

    printf("After swapping, a = %d, b = %d\n", a, b);

    return 0;
}