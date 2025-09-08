// In an array of numbers , find how many times does a number 'x' occurs.
// (Without using functions)


#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 4, 5, 2, 5, 8, 5, 5, 11, 12, 11};
    int x;
    int count=0;
    printf("Enter Number :");
    scanf("%d", &x);

    for(int i=0; i<13; i++){
        if(arr[i] == x) {
            count++;
        }
        else{
            continue;
        }
    }    
    printf("%d", count);

    return 0;
}