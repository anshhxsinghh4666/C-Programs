// PRIME FACTORS : 

#include <stdio.h>

// Function Decalaration :
void prime(int n);

// Function Call :
int main() {
    int n;
    printf("Enter Prime Numbers : ");
    scanf("%d" , &n);

    prime(n);
    return 0;
}

// Function Definition :
void prime(int n) {
   // Divide by 2 until not divisible
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }

    // Try odd numbers from 3 onwards
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        printf("%d", n);
    }
}