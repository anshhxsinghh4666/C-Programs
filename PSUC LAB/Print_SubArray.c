// Write a program to print the subarray that lies between the two indexes.

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
    
    int lb, ub;
    printf("Enter Lower Bound :  ");
    scanf("%d", &lb);
    printf("Entr Upper Bound : ");
    scanf("%d", &ub);

    if(lb<0 || lb>=n || ub<0 || ub>n || lb>ub){
        printf("Invalid Inputs\n");
        return 0;
    }

    printf("SubArray : \n");
    for(int i=lb; i<=ub; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}