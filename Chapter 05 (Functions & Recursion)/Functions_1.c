// FUNCTIONS : Block of code that performs particular task.
//             It can be used multiple times
//             Increase code reusability

// Syntax :      void printHello();  -> Function Prototype or Declaration.

//               void printHello() {}
//                   printf("Hello")  -> Function Definition
//               }

//               int main () {
//                   printHello();  -> Function call
//                   return 0;
//               }

#include <stdio.h>

// Function Declaration/Prototype :  Non Parametric Functions
void printHello();  // 1st Function
void printGoodbye();  // 2nd Function

// Function Call :
int main() {
    // 1st Function Call
    printHello();  // 1st Call
    printHello();  // 2nd Call
    printHello();  // 3rd Call

    // 2nd Function Call
    printGoodbye();  // 1st Call
    printGoodbye();  // 2nd Call

    return 0;
}

// Function Definition :
void printHello() {  // 1st Function Declaration
    printf("Hello World\n");  // Printing "Hello World" on the console.
    printf("My name is Ansh\n");
}

void printGoodbye() {  // 2nd Function Declaration
    printf("Goodbye World\n");  // Printing "Goodbye World" on the console.
}

// Check file Function_2.c for more info on Functions : -> Functions Properties
//                                                      -> Functions Types
//                                                      -> Passing Arguments
