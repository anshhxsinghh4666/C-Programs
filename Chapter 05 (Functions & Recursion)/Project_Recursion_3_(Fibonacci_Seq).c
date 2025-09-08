// WAF to print nth term of the febonacci sequence.


#include <stdio.h>

// Function Declaration :
int fib(int n);

// Function Call :
int main() {
    int n;
    printf("Enter number of Term :");
    scanf("%d", &n);
    
    printf("%d", fib(n));

    return 0;
}

// Function Definition :
int fib(int n) {
    if(n==0 || n==1) {  // Base case : fib(0) & fib(1) is defined.
        if(n==0) {
            return 0;
        }
        if(n==1) {
            return 1;
        }
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}

// Check Notepad for Fibonacci Concept. 