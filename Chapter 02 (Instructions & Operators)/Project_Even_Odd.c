// WAP to check if a number is divisible by 2 or not 
// OR
// WAP to check if a number is even or Odd

// Even -> 1
// Odd -> 0

#include <stdio.h>
#include <math.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d", number%2== 0);
    return 0;
}