// In an array of numbers , find how many times does a number 'x' occurs.
// (Using functions)



#include <stdio.h>

// Function Decalaration :
void repeat(int arr[], int n);

// Function Call :
int main() {
    int arr[] = {1, 2, 2, 4, 5, 2, 5, 8, 5, 5, 11, 12, 11};
    
    repeat(arr, 13);

    return 0;
}

// Function Definition :
void repeat(int arr[], int n){
    int count = 0, x;
    printf("Enter Number :");
    scanf("%d", &x);

    for(int i=0; i<n; i++){
        if(arr[i] == x) {
            count++;
        }
        else{
            continue;
        }
    } 
    printf("%d", count);
}