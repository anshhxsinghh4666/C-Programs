// POINTERS IN FUNCTION CALL : 
//        Call By Value -> We Pass value of variables as argument i.e. values of variables are not changed in main function even if we do anything with variable in Function Definition.
//        Call By Reference -> We Pass address of variable as argument i.e. values get modified in main function as they are in the function definition.


// Call By Reference :   

// NOTE : Check file - Pointers_in_Function_call_1.c (Call by value) to understand the concept below.

#include <stdio.h>
#include <math.h>

// Function Declaration : 
void _square(int *n);  // Parameter

// Function Call
int main() {
    int number = 4;
    _square(&number);  // Argument ;  Output -> 16
    printf("Numner = %d\n", number); // Output -> 16

// NOTE : Here the original value is also changed as the changes are done in the original argument i.e done at the address of argument, not at the copy of argument.
    return 0;
}

// Function Definition 
void _square(int *n) {  // Parameter
    *n = (*n) * (*n);
    printf("Square = %d\n", *n);
}


// NOTE : Here the original argument is edited by the function as here the address of variable is passed in the parameter not the copy of argument.

// TRICK : To convert Call by Value to Call by reference add '*' before every parameter in Function Declaration and Definition and '&' before argument in funtion call