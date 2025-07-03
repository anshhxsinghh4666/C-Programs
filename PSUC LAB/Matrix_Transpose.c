// Write a program to find whether a given matrix is symmetric or not.
// Hint: A = AT


#include <stdio.h>

int main() {
    int r,c;

    printf("Enter Number of Rows : ");
    scanf("%d",&r);
    printf("Number Of columns : ");
    scanf("%d",&c);

    int arr[r][c] , arrcpy[r][c];

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++){
            arrcpy[i][j] = 0;
        }
    }
    
    printf("Enter elements of the matrix : \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++){
            printf("Enter element a%d%d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
            arrcpy[j][i] = arr[i][j];
        }
    }

    printf("Matrix A : \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Matrix AT : \n");
    for(int i=0 ; i<r; i++){
        for(int j=0 ; j<c; j++){
            printf("%d\t", arrcpy[i][j]);
        }
        printf("\n");
    }

    

    return 0;


}