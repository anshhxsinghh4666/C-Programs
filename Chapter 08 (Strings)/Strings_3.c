// STRINGS USING POINTER : 

// Syntax : char *str = "Hello World";
//            -> Store string in memory & the assigned address is stored in the char pointer 'str'

// Difference in Character Array and string using pointer is :
//       -> char *str = "Hello World";  // can be initialized (changed or edited)
//       -> char str[] = "Hello World";  // can't be initialized (changed or edited)


#include <stdio.h>

int main() {
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello Universe";
    puts(canChange);

    // char cannotChange[] = "Hello World";
    // puts(cannotChange);
    // cannotChange = 'H';  // This will not change the string because array is constant.

}