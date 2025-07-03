// POINTERS IN FUNCTION CALL : 
//        Call By Value -> We Pass value of variables as argument.
//        Call By Reference -> We Pass address of variable as argument.


// Call By Value : 

#include <stdio.h>
#include <math.h>

// Function Declarations
void square(int n);  // Parameter

// Function Call
int main() {
    int number = 4;
    square(number);  // Argument ;  Output -> 16
    printf("Numner = %d\n", number); // Output -> 4 (not 16)

// NOTE : Value of 'number' according to function definition is 16 but
//        the statement printf("Numner = %d\n", number); in Function call donot print the calculated square , instead it 
//        prints the value entered by user
// Reason : Changes to Parameters in function don't change the value in Calling Function. Because a copy of argument is passed to the function , not the original argument. So any changes made in the copy of argument won't change the original argument.
// OR we can say that Function definition does anything with the argument the changes is done to the copy of that argument but not the original argument , so changes done by function definition donot effect the original argument.

    return 0;
}

// Function Definition 
void square(int n) {  // Parameter
    n = pow(n, 2);
    printf("Square = %d\n", n);
}