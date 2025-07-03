// Swap 2 numbers , a & b i.e. interchange values of a & b.


#include <stdio.h>

// Function Declaration : Call By Reference
void _swapNumbers(int *a, int *b);  

// Function Call : Call By Reference 
int main() {
    int a, b;
    printf("Enter Value of a : ");
    scanf("%d", &a);
    printf("Enter Value of b : ");
    scanf("%d", &b);

    _swapNumbers(&a , &b); // Values will be swapped
    printf("a = %d & b = %d\n", a, b);  // Values will be swapped in main Function too.

    return 0;
}

// Function Definition : Call By Reference 
void _swapNumbers(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("a = %d\n", *a );
    printf("b = %d\n", *b );
}

