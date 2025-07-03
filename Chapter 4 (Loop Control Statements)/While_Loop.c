// Print 'Hello World' 5 times

#include <stdio.h>
int main() {
    int i = 1;

    // Print 'Hello World' 5 times
    while (i <= 5) {
        printf("Hello World\n");
        i++;
    }
    printf("Loop Ended\n");

    // Print the numbers from 1 to 5
    i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
    printf("Loop Ended\n");

    // Print the numbers from 5 to 1
    i = 5;
    while (i >= 1) {
        printf("%d\n", i);
        i--;
    }
    printf("Loop Ended\n");

    return 0;
}

