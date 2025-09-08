// Array is a pointer which points at index 0 of the array.

// Syntax : int *ptr = &arr[0];
//          OR
//          int *ptr = &arr;

// Traverse An Array : Accessing each and every element of the array.



#include <stdio.h>


// Take Input of 5 aadhar number and store them in an array , then access each element and print them.

int main() {
    int aadhar[4];
    int *ptr = &aadhar[0]; // Pointer points to the first element of the array i.e. at index 0.

    // Input : 
    for(int i=0; i<=4; i++){
        printf("index %d :", i);
        scanf("%d", (ptr+i));
    }

    // Output : 
    for(int i=0; i<=4; i++){
        printf("Value at index %d : %d\n", i, *(ptr+i));
    }

    return 0;
    
}

// Check file - Arrays_3.2.c for an alternative method (Without using pointer).