// WAF to find square root of a number.


#include <stdio.h>
#include <math.h>

// Function Declaration :
int squareroot(int n);

// Function Call :
int main() {
    int n;
    printf("Enter Number:");
    scanf("%d", &n);

    printf("Square Root : %d", squareroot(n));

    return 0;
}

// Function Definition :
int squareroot(int n) {
    int power = pow(n,2);  // to use pow function #include <math.h>
    return power;
}
