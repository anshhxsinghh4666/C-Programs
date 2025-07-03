// Swap 2 numbers , a & b i.e. interchange values of a & b.


#include <stdio.h>

// Function Declaration : Call By Value
void swapNumbers(int a, int b);   

// Function Call : Call By Value 
int main() {
    int a, b;
    printf("Enter Value of a : ");
    scanf("%d", &a);
    printf("Enter Value of b : ");
    scanf("%d", &b);

    swapNumbers(a, b);  // Values will be swapped.
    printf("a = %d & b = %d\n", a, b); // This will print values in main function and values in main function will not get swaped
    // Reason : In Call By Value a copy of argument is provided to function definition not the original argument so any changes made there will not change the original argument in main Function.
    
    return 0;
}

// Function Definition : Call By Value 
void swapNumbers(int a, int b) {
    int t;
    t = a;
    a = b;
    b = t;
    printf("a = %d\n", a );
    printf("b = %d\n", b );
}

