// Reverse Array : 

#include <stdio.h>

int main() {
    int n;

    printf("Enter Size of Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Elements : \n");
    for(int i=0; i<n; i++){
        printf("Enter Element %d (index %d): ", i+1, i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n/2; i++){
        int firstval = arr[i];
        int revfirstval = arr[n-1-i];
        arr[i] = revfirstval;
        arr[n-1-i] = firstval;
    }

    printf("Reverse Array : \n");
    for(int i=0; i<n; i++){
        printf("Element %d : %d \n", i+1, arr[i]);
    }

    return 0;
}