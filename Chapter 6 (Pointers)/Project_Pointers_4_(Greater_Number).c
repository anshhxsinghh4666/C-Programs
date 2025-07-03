// WAP in C to find the maximum number between two numbers using a pointer.


#include <stdio.h>

// Function Declaration : 
void bigNum(int *a, int *b);

// Function Call :
int main() {
    int a, b;
    printf("Enter Num1 :");
    scanf("%d", &a);
    printf("Enter Num2 :");
    scanf("%d", &b);

    bigNum(&a, &b);

    return 0;
}

// Function Definition :
void bigNum(int *a, int *b) {
    if(*a > *b) {
        printf("%d is greater than %d\n", *a, *b);
    }
    else {
        printf("%d is greater than %d\n", *b, *a);
    }

}
