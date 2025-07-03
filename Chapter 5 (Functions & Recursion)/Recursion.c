// RECURSION : When a function calls itself repeatedly.
//              (Its like advance version of loops)
// NOTE: Codes written using loops can be written using recursion and vice versa.


#include <stdio.h>

// Function Declaration :
void HelloWorld(int count);

// Function Call :
int main() {
    int n;
    printf("Nummber of times to print Hello World:");
    scanf("%d", &n);

    HelloWorld(n);  // Function Call : Print "Hello World" n times.

    return 0;
}

// Function Definition : Recursive Function
void HelloWorld(int count) {
    if(count == 0) {  // Base Case : When count becomes 0, the function stops calling itself.
        return; 
    }
    printf("Hello World!\n"); // Recursive Case : Prints "Hello World!" and then calls itself with decremented count.
    HelloWorld(count-1);
}


// Properties of Recursion :
//    -> Anything that can be done with iteration/Loops , can be done with recursion and vice-versa.
//    -> Recursion can sometimes give the most simple solution.
//    -> Base case is the condition which stops Recursion.
//    -> Iteration has infinite Loop & Recursion has stack overflow. 
