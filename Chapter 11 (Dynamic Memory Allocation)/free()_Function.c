// free() : We use it to free memory that is allocated using malloc() & calloc()

// Syntax : free(ptr)
// NOTE : ptr is the pointer pointing to the memory we want to free

// Logic : When we allocate memory to a variable then for example in a code that memory is just used once and after that in the whole program 
// it is unused so we can free the memory. SO for that we use free()



// WAP to allocate memory of size n, where n is entered by the user.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;
    printf("Enter Size :");
    scanf("%d", &n);

    ptr = (int*) calloc(5 , sizeof(int));

    for(int i=0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    
    ptr = (int*) calloc(2 , sizeof(int));
    for(int i=0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }


    return 0; 
}
