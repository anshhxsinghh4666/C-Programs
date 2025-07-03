// WAP to print factorial of a user given number using Loop




#include <stdio.h>

int main() {
    int n;
    printf("Enter Number :");
    scanf("%d", &n);

// While Loop :
    int i = 1, fact1 = 1;
    while(i <= n) {
        fact1 *= i;
        i++;
    }
    printf("Factorial of %d is %d\n", n, fact1);


// For Loop :
    int fact2 = 1;
    for(int i = 1; i <= n; i++) {
        fact2 *= i;
    }
    printf("Factorial of %d is %d\n", n, fact2);


// DO-While Loop :
    int fact3 = 1;
    int k = 1;
    do {
        fact3 *= k;
        k++;
    } while(k <= n);
    printf("Factorial of %d is %d\n", n, fact3);
}


// NOTE: Input small numbers as int datatype can't store too big numbers.