// BREAK :


#include <stdio.h>

int main() {
    for (int i=1; i<=5; i++) {
        if (i == 3) {
            break;
        }
        printf("%d\n", i);
    }
    printf("End");

    return 0;
}


// NOTE : Break Even break-out from Nested Loops.
