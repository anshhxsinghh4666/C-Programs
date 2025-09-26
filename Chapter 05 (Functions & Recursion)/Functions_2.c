// Function Properties :
//  -> Execution always starts from int main().
//  -> A Function gets called directly or indirectly from int main().
//  -> There can be multiple functions in a program.

// Type OF Functions :
//  -> Library Functions : Specail Functions inbuilt in C. scanf(), printf() etc.
//  -> User-Defined Functions : Declared & defined by programmer.

// Passing Arguments : Functions can take value (Parameter) & give some value (Return Value)
//                         ->  void printHello();  > No Argument Passed
//                         ->  void printHello(int n);  > n Argument passed
//                         ->  int printHello(int a, int b);  > 2 arguments a & b passed

// NOTE : void or int in function means the type of value they will return. Since printHello() will print "Hello" but donot return any value so we used void.

// Parameters : Parameters are the named variables listed in the function's definition or declaration.
// They act as placeholders for the values that the function expects to receive when it is called.

// Arguments : Arguments are the actual values or expressions passed to a function when it is called or invoked.
// These values are used to initialize the corresponding parameters in the function's definition.

#include <stdio.h>

// Function Declaration : Parametric Functions
int sum(int a, int b);  // a and b are parameters
// NOTE : We used int because function sum(int a, int b) will take 2 values a & b and make a nuew value sum=a+b and return it. Since it is returning integer type value so we used int.

// Function Call :
int main() {
    // NOTE : With main() we use int because it returns 0;
    int a, b;
    printf("Enter First number:");
    scanf("%d", &a);
    printf("Enter Second number:");
    scanf("%d", &b);

    int s = sum(a, b);  // sum Function Call
    printf("sum is %d", s);
    return 0;
}

// The value of a and b taken by user then put in sum(a,b). This a & b value is copy and pasted in x & y.
// Then x+y is returned to variable x

// Function Defination :
int sum(int x, int y) {  // we can also use int sum(int a, int b)
    return x + y;  //Returns to the calling Function
}

// NOTE : It is not compulsary to keep the variables name same btw Function DEclaration , call or definition.
// The use of that variable is only inside the block of a particular function. We prefer to use same variables to make the code more readable and make our work easy.

// Arguments V/S Parameters :  (IMPORTANT!)

// Arguments :
// -> Values that are passed in function call (Where dataType is not written)
// -> Used to send value
// -> Actual Parameter

// Parameter :
// -> Values in function declaration & definition (Where DataType is written)
// -> Used to recieve value
// -> Formal Parameter

// NOTE : Functions can only return one value at a time.
