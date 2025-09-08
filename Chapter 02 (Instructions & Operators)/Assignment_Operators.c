// ASSIGNMENT OPREATOR : = , += , -= , *= , /= , %=

#include <stdio.h>

int main() {
    int a=10, b=20, c=30, d=40, e=50, f=60, g=70, h=80, k=3, l=4;
    float i = 90, j = 100;

    // ASSIGNMENT OPREATOR =
    a = b;
    printf("a = %d\n", a); // Output: a = 20

    // ASSIGNMENT OPREATOR +=
    c += d;   
    printf("c += d = %d\n", c); // Output: c += d = 70

    // ASSIGNMENT OPREATOR -=
    e -= f;
    printf("e -= f = %d\n", e); // Output: e -= f = 10

    // ASSIGNMENT OPREATOR *=
    g *= h;
    printf("g *= h = %d\n", g); // Output: g *= h = 5600

    // ASSIGNMENT OPREATOR /=
    i /= j;
    printf("i /= j = %f\n", i); // Output: i /= j = 0.9

    // ASSIGNMENT OPREATOR %=
    l %= k;
    printf("Remainder = %d\n", l); // Output: k %= l = 1
    
    return 0;
}