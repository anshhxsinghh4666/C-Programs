// Sum of first n natural Numbers.


#include <stdio.h>

// Function Declaration :
int  sum(int n);

// Function Call :
int main() {
    int n;
    printf("Enter Number:");
    scanf("%d", &n);

    printf("Sum is: %d\n", sum(n));

    return 0;
}

// Function Definition : Recursive Function
int sum(int n) {
    if(n==1) {
        return 1;
    }
    int sumNm1 = sum(n-1); // sum of 1 to n-1
    int sumN = sumNm1 + n;
    return sumN;
}

// Check Notepad for Notes and concept.