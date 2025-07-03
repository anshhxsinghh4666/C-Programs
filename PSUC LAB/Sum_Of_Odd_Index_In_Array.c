// Write a program to find the sum of odd index numbers in an array.


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

    int sum = 0;

    for(int i=0; i<n; i++){
        if(i%2!=0 || i==0){
            sum+=arr[i];
        }
        else{
            continue;
        }
    }

    printf("Sum = %d ", sum);

    return 0;
}