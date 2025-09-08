// Traverse an Array to form an new array with +5 on each place. Take input from user.


#include <stdio.h>

int main() {
    int n;
    printf("Enter Size of Array : ");
    scanf("%d", &n);
    int arr[n];

    // Input : 
    for(int i=0; i<n; i++){
        printf("Enter Value %d : " , i+1);
        scanf("%d", &arr[i]);
    }

    // Old Array : 
    for(int i=0; i<n; i++){
        printf("%d\t " , arr[i]);
    }

    printf("\n");

    // Increasing +5 to each place : 
    for(int i = 0 ; i<n; i++){
        arr[i]+=5;
    }

    // New Array : 
    for(int i=0; i<n; i++){
        printf("%d\t " , arr[i]);
    }
}