// Write a program for searching for an element in the matrix and counting the number of occurrences of that element.


#include <stdio.h>

int main() {
    int r,c;
    printf("Enter Number of Rows : ");
    scanf("%d", &r);
    printf("Enter Number of Columns : ");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter Elements : ");
    for(int i=0; i<r; i++){
        printf("Row %d : ", i+1);
        for(int j=0; j<c; j++){
            printf("column %d : ", j+1);
            scanf("%d", &a[i][j]);
        }
    }
    
    int ele;
    printf("Enter Element to search : ");
    scanf("%d", &ele);
    
    int count = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j] == ele){
                count+=1;
            }
        }
    }

    printf("Number of Occurances : %d", count);

    return 0;
}