// Type Declaration Instructions : Declare varaiable before using it.

//     Valid                                       Invalid
//  int a = 22;                                    int a = 22;
//  int b = a;                                     int b = c + 1;
//  int c = b + 1;                                 int c = b + 2;
//  int d = 1, e;                                  int d = 2, e;

//  int a, b, c;                                   int a = b = c = 1;   //Didn't declare the variables
//  a = b = c = 1;

#include <stdio.h>
#include <math.h>
int main()
{
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e; // e is not assigned any value still ut will not give any error.

    int oldAge = 25;
    int years = 2;
    int newAge = oldAge + years;

    int x, y, z; // Declaring (Initializing) multiple variables at once.
    x = y = z = 1;
    // NOTE : We can't use and declare together at the same time. E.g. Only writing x = y = z = 1; is not valid as we didn't declare using int x, y, z; before.
    return 0;
}