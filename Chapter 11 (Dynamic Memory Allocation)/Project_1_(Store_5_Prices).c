// WAP to allocate memory to store 5 prices


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));

    for(int i=0 , j=1; i<5, j<=5; i++, j++){
        printf("Enter Price %d : ", j);
        scanf("%d", &ptr[i]);
    }
    for(int i=0 ,j=1; i<5, j<=5; i++, j++){
        printf("Price %d : %d\n", j , ptr[i]);
    }

    return 0;
}