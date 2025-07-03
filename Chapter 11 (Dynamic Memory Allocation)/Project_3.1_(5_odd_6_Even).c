// Allocate memory to store first 5 odd numbers, the reallocate ot to store first 6 even number.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for the first 5 odd numbers
    ptr = (int*)calloc(5, sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n"); 
        return 1;
    }

    printf("Enter 5 Odd Numbers:\n");
    for (int i = 0; i < 5; i++) {
        int temp;
        while (1) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &temp);
            if (temp % 2 != 0) {
                ptr[i] = temp;
                break;
            } 
            else {
                printf("Wrong Entry. Please enter an odd number.\n");
            }
        }
    }

    // Printing the first 5 odd numbers
    printf("\nFirst 5 Odd Numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d: %d\n", i + 1, ptr[i]);
    }

    // Reallocating memory to store 6 even numbers
    ptr = realloc(ptr, 6 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("\nEnter 6 Even Numbers:\n");
    for (int i = 0; i < 6; i++) {
        int temp;
        while (1) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &temp);
            if (temp % 2 == 0) {
                ptr[i] = temp;
                break;
            } 
            else {
                printf("Wrong Entry. Please enter an even number.\n");
            }
        }
    }

    // Printing the first 6 even numbers
    printf("\nFirst 6 Even Numbers:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d: %d\n", i + 1, ptr[i]);
    }

    // Free allocated memory
    free(ptr);

    return 0;
}