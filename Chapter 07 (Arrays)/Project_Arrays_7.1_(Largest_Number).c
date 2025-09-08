// WAP to print the largest number in an array. (without using function)


#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
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