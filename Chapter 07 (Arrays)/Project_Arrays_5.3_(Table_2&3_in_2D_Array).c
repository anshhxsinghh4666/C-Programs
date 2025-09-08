// Create a 2D array, storing the tables of 2 & 3. (Using Funtions)

// Check File : Project_Arrays_5.4_(Table_2&3_in_2D_Array) for alternative method


#include <stdio.h>

// Function Declaration
void storetable(int tables[2][10]);

// Function Call
int main() {
    int tables[2][10];

    storetable(tables);

     // Printing Table of 2
    printf("Table of 2:\n"); 
    for(int i = 0; i < 10; i++) {
        printf("%d\n", tables[0][i]);
    }

    // Printing Table of 3
    printf("Table of 3:\n"); 
    for(int i = 0; i < 10; i++) {
        printf("%d\n", tables[1][i]);
    }

    return 0;
}

// Function Definition
void storetable(int tables[2][10]) {

    // Table of 2
    for(int i = 0; i < 10; i++) {
        tables[0][i] = 2 * (i + 1);
    }
    
    // Table of 3
    for(int i = 0; i < 10; i++) {
        tables[1][i] = 3 * (i + 1);
    }
}
