// realloc() : reallocate (increase or decrease) memory using the same pointer & size.

// Syntax : ptr = realloc(ptr, newSize);



// Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.


#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));
    printf("Enter Numbers(5) : ");
    for(int i=0; i<5; i++){
        scanf("%d", &ptr[i]);
    }
    
    // Adding/Reallocating more memory
    ptr = realloc(ptr, 8);
    printf("Enter Numbers(8) : ");
    for(int i=0; i<8; i++){
        scanf("%d", &ptr[i]);
    }

    // print
    for(int i=0; i<8; i++){
        printf("Number %d\n", ptr[i]);
    }

    return 0;
}
