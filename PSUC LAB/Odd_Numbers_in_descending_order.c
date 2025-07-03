// Write a program to take N as input and print the odd numbers in descending order.


#include <stdio.h>

int main() {
    int n;

    printf("Enter N : ");
    scanf("%d", &n);

    for(int i=n ; i>0; i--){
        if(i%2 != 0){
            printf("%d\t", i);
        }
        else{
            continue;
        }
    }
    return 0;
}