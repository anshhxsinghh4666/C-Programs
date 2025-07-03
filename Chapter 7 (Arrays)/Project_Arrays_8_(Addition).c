// Addition of 2 numbers. Take matrices from user


#include <stdio.h>
#include <stdlib.h>



int main() {
    int r1, r2, c1, c2;
    printf("Enter Number Of Rows For First Matrix :");
    scanf("%d", &r1);
    printf("Enter Number of Columns For First Matrix :");
    scanf("%d", &r2);
    printf("Number Of Rows For second Matrix");
    scanf("%d", &c1);

    if(r1!=r2 || c2!=c2){
        printf("Matrices can't be added. Number of rows and columns should be same.");
        return 0;
    }

    int a[r1][c1], b[r2][c2];

    printf("Enter %d values for First Matrix :", r1*c1);
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c1; j++) {
            scanf("%d", &a[r1][c1]);
        }
    }

    printf("Enter %d values for Second Matrix :", r2*c2);
    for(int i=0; i<r2; i++) {
        for(int j=0; j<c2; j++) {
            scanf("%d", &a[r2][c2]);
        }
    }

    printf("Sum :", r1*c1);
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c1; j++) {
            printf("%d", a[r1][c1]+a[r2][c2]);
        }
    }
    
    return 0;

}