// WAF to calculate the sum, product & Average of 2 numbers. Print that average in the main function.

// NOTE : Function can only return onr value at a time , but if we need to return multiple values we need to use Pointers.


#include <stdio.h>

// Function Declaration :
void work(int a, int b, int *sum, int *product, int *avg);

// Function Call :
int main() {
    int a = 3 , b = 5;
    int sum, product, avg;
    
    work(a, b, &sum, &product, &avg);
    printf("Sum = %d, Product = %d, Average = %d\n", sum, product, avg);
    return 0;
}

// Function Definition :
void work(int a, int b, int *sum, int *product, int *avg) {
    *sum = a+b;
    *product = a*b;
    *avg = (a+b)/2;
}


// NOTE : Here a & b are passed by value and sum, product & avg are passed by reference.
