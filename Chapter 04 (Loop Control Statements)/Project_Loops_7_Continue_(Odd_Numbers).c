// WAP to print all odd numbers from 5 to 50


#include <stdio.h>
#include <math.h>

int main() {

// For Loop :
    for (int i=5 ; i<=50 ; i++) {
        if(i%2==0) {
            continue; // Skip even numbers
        }
    printf("%d\n", i);
    } 
    printf("For Loop Ended\n");

// While Loop :
    int j = 5;
    while(j<=50) {
        if(j%2==0) {
            continue;
        }
    printf("%d\n", j);
    j++;
    }
    printf("While Loop Ended\n");
    
}