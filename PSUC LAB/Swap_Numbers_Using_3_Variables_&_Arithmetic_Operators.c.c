// Swap 2 numbers, a & b i.e. interchange values of a and b.


#include <stdio.h>

// Function Declaration
void swapNumbers(int a, int b);

// Function Call
int main() {
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    swapNumbers(a, b);

    return 0;
}

// Function Definition
void swapNumbers(int a, int b) {
    if (a > b) {
        int s;
        s = a - b;
        a = a - s;
        b = a + s;
        printf("After swapping, a = %d\n", a);
        printf("After swapping, b = %d\n", b);
    } 
    else if (a < b) {
        int s;
        s = b - a;
        a = a + s;
        b = a - s;
        printf("After swapping, a = %d\n", a);
        printf("After swapping, b = %d\n", b);
    } 
    else {
        printf("Both numbers are equal\n");
    }
}