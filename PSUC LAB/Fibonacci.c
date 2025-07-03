// Write a program to print the Fibonacci number.
// Hint: (Fibonacci series is 0, 1, 1, 2, 3, 5, 8,)

#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2;           // Update t1 to t2
        t2 = nextTerm;     // Update t2 to nextTerm
    }

    printf("\n");
    return 0;
}