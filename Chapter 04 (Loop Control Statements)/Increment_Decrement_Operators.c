#include <stdio.h> // Include the standard input/output library

int main() {
    // i++ (Post increment Operator) : use , than increase by 1
    int i = 1;
    printf("%d\n", i++); // Output: 1 ; use
    printf("%d\n", i); // Output: 2 ; increase by 1

    // ++i (Pre Increment Operator) : increase than use
    int j = 1;
    printf("%d\n", ++j); // Output: 2 ; increase by 1
    printf("%d\n", j); // Output: 2 ; use

    // i-- (Post decrement Operator) : use , than decrease by 1
    int k = 1;
    printf("%d\n", k--); // Output: 1 ; use
    printf("%d\n", k); // Output: 0 ; decrease by 1

    // --i (Pre decrement Operator) : decrease than use
    int l = 1;
    printf("%d\n", --l); // Output: 0 ; decrease by 1
    printf("%d\n", l); // Output: 0 ; use

    return 0;
}
