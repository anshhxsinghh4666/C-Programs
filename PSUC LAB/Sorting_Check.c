// Write a program to check whether an array is sorted or not.


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
    
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            continue;
        }
        else{
            printf("Array is not sorted \n");
            return 0;
        }
    }

    printf("Array Is Sorted");
    
    return 0;
}