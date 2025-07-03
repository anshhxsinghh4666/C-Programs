// Arrays as Function Argument

// Funtion Declaration Syntax : void printNumbers(int arr[], int n);  -> without using Pointers
//                              OR
//                              void printNumbers(int *arr, int n);  -> Using Pointers

// Function Call Syntax : printNumbers(arr, n);

// NOTE : When we pass an Array in an Function , it is always call by Reference i.e.
// the value of array is as modified in the original Function.



#include <stdio.h>


// Print all the elements of the array

// Function Declaration :
void printNumbers(int arr[], int n);

// Function Call :
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    return 0;
}

// Function Definition :
void printNumbers(int arr[], int n){
    for(int i=0; i<n; i++){
    printf("%d \t", arr[i]);
    }
}


// To use pointers method replace void printNumbers(int arr[], int n) by void printNumbers(int *arr, int n)
