// Factorial of first n natural Numbers.


#include <stdio.h>

// Function Declaration :
int  Factorial(int n);

// Function Call :
int main() {
    int n;
    printf("Enter Number:");
    scanf("%d", &n);

    printf("Factorial is: %d\n", Factorial(n));

    return 0;
}

// Function Definition : Recursive Function
int Factorial(int n) {
    if(n==1) {
        return 1;
    }
    int FactorialNm1 = Factorial(n-1); // Factorial of 1 to n-1
    int FactorialN = FactorialNm1 * n;
    return FactorialN;
}

// Check Notepad for Notes and concept.