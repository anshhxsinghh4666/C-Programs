// WAP to Keep taking numbers  as input from user until user enters an ODD number.
//        -> Take continous input from user till user enters an odd number.


#include <stdio.h>

int main() {
    int n;
    
    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n%2!=0) {
            break;
        }

    } while(1); // while(1) means always true , so the loop will go on till odd number is 
                // entered by user. Once it is entered we will break out of the loop.
    
    printf("Loop Ended : Odd Number Entered by User.");

    return 0;
}