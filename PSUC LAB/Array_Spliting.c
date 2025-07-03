// Write a program to take an array of 10 elements. Split it into the middle and store the elements in two different arrays. 


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

    if(n%2==0){
        int sarr1[n/2], sarr2[n/2];
        for(int i=0; i<n/2; i++){
            sarr1[i] = arr[i];
            sarr2[i] = arr[i+n/2];
        }
        printf("Array 1 : \n");
        for(int i=0; i<n/2; i++){
            printf("%d\t", sarr1[i]);
        }
        printf("Array 2 : \n");
        for(int i=0; i<n/2; i++){
            printf("%d\t", sarr2[i]);
        }
    }
    else{
        int sarr1[(n-1)/2], sarr2[(n+1)/2];
        for(int i=0; i<(n-1)/2; i++){
            sarr1[i] = arr[i];
            sarr2[i] = arr[i+(n-1)/2];
        }
        printf("Array 1 : \n");
        for(int i=0; i<(n-1)/2; i++){
            printf("%d\t", sarr1[i]);
        }
        printf("\nArray 2 : \n");
        for(int i=0; i<(n+1)/2; i++){
            printf("%d\t", sarr2[i]);
        }
    }

    return 0;
}