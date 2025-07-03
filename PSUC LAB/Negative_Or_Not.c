// WAP to display a number if it is negative or not


#include <stdio.h>

// Function Decalaration :
void neg();

// Function Call :
int main() {
    neg();
    return 0;
}

// Function Definition :
void neg(){
    int num;
    
    printf("Enter a number : ");
    scanf("%d", &num);
    
    if(num < 0)
        printf("%d is negative.\n", num);
    else
        printf("%d is not negative.\n", num);
}