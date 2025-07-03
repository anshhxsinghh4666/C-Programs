#include <stdio.h>

int main() {
    int r1, r2, c1, c2;
    printf("Matrix 1 : \n");
    printf("Enter Number of Rows : ");
    scanf("%d", &r1);
    printf("Enter Number of Columns : ");
    scanf("%d", &c1);
    printf("\n");
    printf("Matrix 2 : \n");
    printf("Enter Number of Rows : ");
    scanf("%d", &r2);
    printf("Enter Number of Columns : ");
    scanf("%d", &c2);

    if(r1!=r2 && c1!=c2){
        printf("NOT POSSIBLE !! Number of Rows and columns of both matrices must be equal");
        return 0;
    }

    int a[r1][c1], b[r2][c2];
    
    printf("Enter Elements of Matrix 1 : ");
    for(int i=1; i<=r1; i++){
        for(int j=1; j<=c1; j++){
            printf("(%d , %d) : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Elements of Matrix 2 : ");
    for(int i=1; i<=r2; i++){
        for(int j=1; j<=c2; j++){
            printf("(%d , %d) : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("Addition of Matrix :\n");
    for(int i=1; i<=r2; i++){
        for(int j=1; j<=c2; j++){
            printf("%D\t", a[i][j]+b[i][j]);
        }
    printf("\n");
    }
    
    return 0;
}