// Write a program to find the factorial of a number using a function. (Ex: 5! =5*4*3*2*1. Use a function Fact to evaluate factorial & print the result).

#include <stdio.h>

// Function Decalaration :
int fact(int a);

// Function Call :
int main() {
    int a;
    printf("Enter Number : ");
    scanf("%d", &a);

    printf("Factorial : %d", fact(a));
    return 0;
}

// Function Definition :
int fact(int a){
    int fact_=1;
    for(int i=1; i<=a; i++){
        fact_*=i;
    }
    return fact_;
}