// DO WHILE LOOP :

// Syntax : do {
                // statements
//          } while (condition);


#include <stdio.h>
int main() {

// Print numbers from 1 to 5
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("Loop Ended\n");

    // // Print numbers from 5 to 1
    int j = 5;
    do
    {
        printf("%d ", j);
        j--;
    } while (j >= 1);
    printf("Loop Ended\n");
    
    return 0;
}