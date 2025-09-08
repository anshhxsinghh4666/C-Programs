// CONDITIONAL OPERATORS :  


// Ternary Operator

// Syntax :   Condition ? doSomething if TRUE : doSomething if FALSE;

#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult\n") : printf("Not Adult\n"); 

    return 0;
}

