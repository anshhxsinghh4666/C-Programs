// WAF to find sum of digits of a number.


#include <stdio.h>

// Function Declaration :
int sumofdigits(int n);

// Function Call :
int main() {
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    printf("Sum of Digits : %d\n",sumofdigits(n));

    return 0;
}

// Function Definition :
int sumofdigits(int n) {
    int sum=0;
    while (n>0) {
        int r;
        r = n%10;  // r = remainder
        sum += r;
        n = n/10;  // n = quotient
    }
    return sum;
}


// Concept : 
// -> Let's take an example - Sum of digits of 135.
// -> Divide by 135 by 10 - Remainder = 5 (1st digit) add the remainder in an variable sum = 0.
// -> After dividing we get quotient 13
// -> Divide quotient by 10 - We get Remainder 3 (@nd Digit). Add the remainder to variable sum.
// -> At a point n = 1. Then r =  n%10 gives 1. So we got the last digit 1 and added it to sum variable
// -> Got the sum of digits.

// Check NotePad for more notes.

