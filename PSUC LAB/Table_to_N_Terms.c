// Write a program to generate the multiplication table for n numbers up to k terms (nested loops).


#include <stdio.h>

int main() {
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    int k;
    printf("Enter k Terms : ");
    scanf("%d", &k);
    
    for(int i=1; i<k; i++){
        printf("%d x %d = %d \n", n, i, n*i);
    }

    return 0;
}

