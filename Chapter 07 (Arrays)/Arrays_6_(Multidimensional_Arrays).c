// General Program to make matrix of r rows and c columns and print it. Take no. of rows, columns and values from user.


#include <stdio.h>

int main() {
    int r, c;
    printf("Enter Number Of Rows :");
    scanf("%d" , &r);
    printf("Enter Number Of Columns :");
    scanf("%d" , &c);
    
    int a[r][c];

    printf("Enter %d values :", r*c);
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix : \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}