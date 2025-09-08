// Create a 2D array, storing the tables of 2 & 3. (without using Funtions)

// Check File : Project_Arrays_5.2_(Table_2&3_in_2D_Array) for Code using Functions.


#include <stdio.h>


int main() {
    int Table[2][10];

    // Table of 2 :
    for(int i=1, n=0; i<11 && n<10; i++, n++) {
        int val = 2*i;
        Table[0][n] = val;
    }

    // Table of 3 :
    for(int i=1, n=0; i<11 && n<10; i++, n++) {
        int val = 3*i;
        Table[1][n] = val;
    }

    // Print Table of 2 :
    printf("Table of 2 : \n");
    for(int i=0; i<10; i++){
        printf("%d \n", Table[0][i]);
    }

    // Print Table of 3 :
    printf("Table of 3 : \n");
    for(int i=0; i<10; i++){
        printf("%d \n", Table[1][i]);
    }
}