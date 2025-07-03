// Write a program to find the largest and smallest element in an array.


#include <stdio.h>

int main() {
    int n;
    printf("Enter Size of Array : ");
    scanf("%d", &n);
    if(n<0){
        printf("Invalid Input ");
        return 0;
    }

    int arr[n];
    
    printf("Enter 5 Elements : \n");
    for(int i=0 ; i<n ; i++) {
        printf("Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Bubble Sorting : 
    for(int i=0 ; i<n-1; i++){
        for(int j=0 ; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Smallest Element : %d\n", arr[0]);
    printf("Largest Element : %d\n", arr[n-1]);

    return 0;
}