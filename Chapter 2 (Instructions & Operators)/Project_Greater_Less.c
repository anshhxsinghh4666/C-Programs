// WAP to print 1 (True) if a number is greater than 9 & less than 100.

#include <stdio.h>

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf(" %d\n", num > 9 && num < 100);  // True -> 1 , False -> 0
    return 0;
}