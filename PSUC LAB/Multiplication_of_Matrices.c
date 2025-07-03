// Write a program to multiply two matrices


#include <stdio.h>

int main() {
    int r1,c1;
    printf("Enter Number of Rows : ");
    scanf("%d", &r1);
    printf("Enter Number of Columns : ");
    scanf("%d", &c1);

    int r2,c2;
    printf("Enter Number of Rows : ");
    scanf("%d", &r2);
    printf("Enter Number of Columns : ");
    scanf("%d", &c2);


    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }


    int a[r1][c1];

    printf("Enter Elements : ");
    for(int i=0; i<r1; i++){
        printf("Row %d : ", i+1);
        for(int j=0; j<c1; j++){
            printf("column %d : ", j+1);
            scanf("%d", &a[i][j]);
        }
    }

    
    int b[r2][c2];

    printf("Enter Elements : ");
    for(int i=0; i<r2; i++){
        printf("Row %d : ", i+1);
        for(int j=0; j<c2; j++){
            printf("column %d : ", j+1);
            scanf("%d", &b[i][j]);
        }
    }

    int result[r1][c2];

    // Initialize the result matrix to zero
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the result
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
