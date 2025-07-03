// CONTINUE : Skip to next Iteration.



#include <stdio.h>

int main() {

    for (int i=1; i<=5; i++) {
        if(i==3) {
            continue;  //Skip 3
        }
    printf("%d\n", i); // will skip 3 and , Output-> 1 , 2 , 4 , 5
    }
    printf("Loop Ended\n");


// Print Numbers from 1 to 10 except 6

    for (int i=1; i<=10; i++) {
        if(i==6) {
            continue; //Skip 6
        }
    printf("%d\n", i); // will skip 6 and , Output-> 1 , 2 , 3 , 4 , 5 , 7 , 8 , 9 , 10
    }
    printf("loop Ended\n");

    return 0;
}

