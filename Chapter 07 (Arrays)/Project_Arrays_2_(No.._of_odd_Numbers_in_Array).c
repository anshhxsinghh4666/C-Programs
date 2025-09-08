// WAF to count the number of odd numbers in an Array :


#include <stdio.h>

// Function Decalaration :
void OddNumbers(int arr[10]);    //  OR ->  void OddNumbers(int arr[], int n);

// Function Call :
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};    //  OR -> int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    OddNumbers(arr);    // OR -> OddNumbers(arr, 10);
    return 0;
}

// Function Definition :
void OddNumbers(int arr[10]) {    //  OR ->  void OddNumbers(int arr[], int n);
    int count = 0;
    for(int i = 0; i < 10; i++){
        if (arr[i]%2!=0){
            count++;
        }
        else {
            continue;
        }
    }
    printf("Number of odd numbers in the array is: %d\n", count);
}
    