// Write a program to reverse an array with an auxiliary array.

#include <stdio.h>

int main() {
    int n;

    printf("Enter Size of Array : ");
    scanf("%d", &n);

    int arr[n] , aux[n];

    printf("Enter Elements : \n");
    for(int i=0; i<n; i++){
        printf("Enter Element %d (index %d): ", i+1, i);
        scanf("%d", &arr[i]);
    }

    // Copying elements from original array to auxiliary array
    for(int i=0; i<n; i++){
        aux[i] = arr[n-1-i];
    }
    
    printf("Reverse Array : \n");
    for(int i=0; i<n; i++){
        printf("Element %d : %d \n", i+1, aux[i]);
    }

    return 0;


}