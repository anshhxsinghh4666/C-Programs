// WAP to print the largest number in an array. (Using function)



#include <stdio.h>

// Function Decalaration :
void largest(int arr[], int n);

// Function Call :
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    largest(arr, 11);

    return 0;
}

// Function Definition :
void largest(int arr[], int n){
int number = 0;
for(int i=0; i<11; i++){
        if(arr[i]>number){
            number = arr[i];
        }
        else {
            continue;
        }
    }
    printf("Largest Number is %d", number);
}