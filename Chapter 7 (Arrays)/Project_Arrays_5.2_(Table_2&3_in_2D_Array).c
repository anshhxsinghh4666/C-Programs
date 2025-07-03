// Create a 2D array, storing the tables of 2 & 3. (Using Funtions)

// Check File : Project_Arrays_5.3_(Table_2&3_in_2D_Array) for alternate method.



#include <stdio.h>


// Function Decalaration :
void storetable(int tables[2][10]);

// Function Call :
int main() {
    int tables[2][10];

    storetable(tables);

    // Printing Table of 2 :
    printf("Table of 2 : \n"); 
    for(int i=0; i<10; i++) {
        printf("%d \n", tables[0][i]);
    }

    // Printing Table of 3 :
    printf("Table of 3 : \n"); 
    for(int i=0; i<10; i++) {
        printf("%d \n", tables[1][i]);
    }

    return 0;
}

// Function Definition :
void storetable(int tables[2][10]){

    // Table of 2 :
    for(int i=1, n=0; i<11 && n<10; i++, n++){
        tables[0][n] = 2*i;
    }
    
    // For Table of 3 :
    for(int i=1, n=0; i<11 && n<10; i++, n++){
        tables[1][n] = 3*i;
    }
}
    

    




