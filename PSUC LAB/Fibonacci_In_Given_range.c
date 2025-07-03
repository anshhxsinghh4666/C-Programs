// Write a program to print the Fibonacci numbers that fall in the given range.

#include <stdio.h>

int main() {
    int lower, upper;
    
    // Input the range
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);
    
    // First two numbers of the Fibonacci series
    int a = 0, b = 1;
    
    // Print Fibonacci numbers that fall within the given range
    printf("Fibonacci numbers in the range [%d, %d]:\n", lower, upper);
    
    // Loop to generate Fibonacci numbers within the range
    while (a <= upper) {
        if (a >= lower) {
            printf("%d ", a);
        }
        
        // Generate the next Fibonacci number
        int next = a + b;
        a = b;
        b = next;
    }
    
    printf("\n");
    
    return 0;
}