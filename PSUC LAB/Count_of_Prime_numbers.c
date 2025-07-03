// Count the number of prime numbers from 0 to n :

#include <math.h>
#include <stdio.h>

// Function Decalaration :
int countPrimes(int n);

// Function Call :
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    printf("Number of Prime Numbers = %d ", countPrimes(n));

    return 0;
}

// Function Definition :
int countPrimes(int n){
    int count = 0;
    for (int i = 2; i < n; i++) {
        int isprime = 1;
        for (int j = 2; j <= sqrt(i); j++) {  // OR Use for(int i = 2; i<=sqrt(num); i++)
            if (i % j == 0) {
                isprime = 0;
                break;
            }
        }
        if (isprime != 0) {
            count++;
        }
    }
    return count;
}