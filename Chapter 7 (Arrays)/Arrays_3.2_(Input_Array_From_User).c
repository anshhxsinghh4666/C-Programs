// Array is a pointer which points at index 0 of the array.

// Syntax : int *ptr = &arr[0];
//          OR
//          int *ptr = &arr;

// Traverse An Array : Accessing each and every element of the array.



#include <stdio.h>


// Take Input of 5 aadhar number and store them in an array , then access each element and print them.
    
    int main() {
    int _aadhar[5];

    // Input : 
    for(int i=0; i<5; i++){
        printf("index %d :", i);
        scanf("%d", &_aadhar[i]);
    }

    // Output : 
    for(int i=0; i<5; i++){
        printf("Value at index %d : %d\n", i, _aadhar[i]);
    }
    
    return 0;
}