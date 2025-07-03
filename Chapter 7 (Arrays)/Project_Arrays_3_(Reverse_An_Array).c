// WAF to Reverse an Array.

// Check Notepad for More info and notes.


#include <stdio.h>

// Function Decalaration :
void ReverseArray(int arr[], int n);
// n is size of array.

// Function Call :
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8};

    ReverseArray(arr1, 5);
    ReverseArray(arr2, 8);

    return 0;
} 

// Function Definition :
void ReverseArray(int arr[], int n) {
    for(int i=0; i<n/2; i++){
        
        // Accessing Values of Array for Reversing :
        int firstVal = arr[i];  // Value At index i before exchanging (Original Value)
        int secondVal = arr[n-i-1];  // Value At index i after exchanging (Reversed Array Value)
        
        // Reversing Array Values : 
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }

    // Printing Reversed Array :
    for(int i=0; i<n; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");   
}

// NOTE : When we pass an Array in an Function , it is always call by Reference i.e.
// the value of array is as modified in the original Function.
