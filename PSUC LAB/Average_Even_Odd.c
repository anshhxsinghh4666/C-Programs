#include <stdio.h>

// Function Declaration:
void checkAvgEvenOdd(int a, int b);

// Function Call:
int main() {
    int a, b;
    printf("Enter Number 1: ");
    scanf("%d", &a);
    printf("Enter Number 2: ");
    scanf("%d", &b);

    checkAvgEvenOdd(a, b);

    return 0;
}

// Function Definition:
void checkAvgEvenOdd(int a, int b) {
    int avg = (a + b) / 2;
    if (avg % 2 == 0) {
        printf("Average is even\n");
    } else {
        printf("Average is odd\n");
    }
}