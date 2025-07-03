// WAP to store the first n fibonacci numbers.



#include <stdio.h>

int main() {
    int n;
    printf("Enter Number of Terms n (n>2) : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;  // 1st Term
    fib[1] = 1;  // 2nd Term
    // NOTE : The first 2 terms are fixed or a fact i.e. are sequence after that can't be made if we don't fix that 1st two terms.
    
    printf("0  1  ");  // To print the 1st two term as they are fixed (fact) & not the part of the loop.
    for (int i=2; i<n; i++) {
        fib[i] = fib[i-1] + fib[i-2];  // (IMPORTANT) Fixed condition to find nth term or n number of term.
        printf("%d  ", fib[i]);  // This will print Numbers after 1st and 2nd term. So the printf satement just before for loop prints the 1st two terms.
    }
    return 0;
}