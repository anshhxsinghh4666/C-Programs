// Create a 2D array, storing the tables of 2 & 3. (Using Funtions)



#include <stdio.h>

// Function Decalaration :
void storetables(int arr[][10], int n, int m, int number);  // n = Rows , m = columns , number = 2 & 3


// Function Call :
int main() {
    int tables[2][10];

    storetables(tables, 0, 10, 2); // Table of 2
    storetables(tables, 1, 10, 3); // Table of 2

    // Printing Table of 2:
    printf("Table of 2 : \n");
    for(int i=0; i<10; i++) {
        printf("%d \n", tables[0][i]);
    }

    // Printing Table of 3:
    printf("Table of 3 : \n");
    for(int i=0; i<10; i++) {
        printf("%d \n", tables[1][i]);
    }

    return 0;
}

// Function Definition :
void storetables(int arr[][10], int n, int m, int number){
    for(int i=0; i<m; i++){
        arr[n][i] = number * (i+1);
    }
}


