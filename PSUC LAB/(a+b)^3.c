// WAP to compute (a+b)^3.


#include <stdio.h>
#include <math.h>

// Function Decalaration :
int cube(int a , int b , int c);

// Function Call :
int main() {
    int a, b, c;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    printf("(a + b)^3 = %d\n", cube(a , b , c));

    return 0;
}

// Function Definition :
int cube(int a , int b , int c){
    // c = (a + b) * (a + b) * (a + b);
    c = pow((a + b), 3);
    return c;
}


