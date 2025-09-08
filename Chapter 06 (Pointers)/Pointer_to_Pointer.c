// POINTER TO POINTER : A variable that stores the memory address of another pointer.

// Synatx :   int **pptr;   
//            char **pptr;   
//            float **pptr;   


#include <stdio.h>

int main() {
    float price = 100.00;
    float *ptr = &price;  // &price is Address of Price (Pointer)
    float **pptr = &ptr;  // &ptr Address of ptr (Pointer to Pointer)
    
    printf("%f\n", *ptr);  // *ptr = 5  -> Value of price
    printf("%u\n", *pptr);  // *pptr = Address of price -> Value stored in price
    printf("%f\n", **pptr);  // **pptr = 5 -> Value stored in the address stored in ptr

    return 0;
}