// Addition of 2 numbers. Take matrices from user

#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c], b[r][c], sum[r][c];

    printf("Enter %d values for First Matrix:\n", r * c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter %d values for Second Matrix:\n", r * c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}