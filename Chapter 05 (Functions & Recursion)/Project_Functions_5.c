#include <stdio.h>
#include <math.h>

// Function Declaration
void square(int n);

// Function Call
int main() {
    int n;
    printf("Enter Number :");
    scanf("%d", &n);
    
    square(n);  // Function Call
    
    return 0;
}

// Function Definition
void square(int n) {
    printf("Square of %d is %d\n", n, (int)pow(n, 2));
}
