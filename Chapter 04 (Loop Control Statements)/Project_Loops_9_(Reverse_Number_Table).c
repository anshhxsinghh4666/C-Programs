// Print REVERSE of the table for a number n.


#include <stdio.h>

int main() {
    int n;
    printf("Enter Number :");
    scanf("%d", &n);

// While Loop :
    int i=10;
    while(i>0) {
        printf("%d\n",n*i);
        i--;
    }
    printf("While Loop Ended");

// For Loop :
    for(int i=10; i>0; i--) {
        printf("%d\n",n*i);
    }
    printf("For Loop Ended");

// Do-While Loop :
    int k=10;
    do {
        printf("%d\n",n*k);
        k--;
    }while(k>0);
    printf("Do-While Loop Ended");

    return 0;
}