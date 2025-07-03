// Write a program to print the Nth the prime number.


#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter Nth Number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid Input\n");
        return 0;
    }

    for (int i = 2;; i++) {
        int isprime = 1;  // Re-initialize isprime for each new number

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isprime = 0;  // Not a prime number
                break;
            }
        }

        if (isprime) {
            count++;
            if (count == n) {
                printf("Prime Number at %dth position is: %d\n", n, i);
                return 0;
            }
        }
    }
}