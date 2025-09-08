// WAP to Keep taking numbers as input from user until user enters a number which is multiple of 7.


#include <stdio.h>

int main() {
    int n;

    do {
        printf("Enter Number:");
        scanf("%d", &n);
        printf("%d", n);

        if(n%7==0) {
            break;
        }
    } while(1); // while(1) means always true , so the loop will go on till Multiple of 7 is 
                // entered by user. Once it is entered we will break out of the loop.
    printf("Loop Ended");
    
    return 0;
}