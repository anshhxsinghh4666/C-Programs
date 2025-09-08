// Arithmetic Instructions : Perform arithmetic operations on variables.

// Sum = (Operand 1) a    +     b (Operand 2)
//                    (Operator)
// NOTE : Single Variable on the LHS so in code: int x,y = a+b , sum is stored in y only and x is empty.

#include <stdio.h>
#include <math.h>
int main () {

    int p = 5, q = 2;
    int sum = p + q;
    int multiply = p * q;
    printf("sum = %d\n", sum);
    printf("Product = %d\n", multiply);

//           Valid                                        Invalid
//       -> a = b + c                                  -> b + c = 6
//       -> a = b * c                                  -> a = bc
//       -> a = b / c                                  -> a = b^c

    int power = pow(p, q); // p power q
    printf("Power = %d\n", power);

    int modular1 = p % q; // remainder of p divided by q
    printf("Modular = %d\n", modular1);
// NOTE : Modular only works for integer values (Not for float).
    int X = -10, Y = 3;
    int modular2 = X % Y;
    printf("Modular = %d\n", modular2);
// NOTE : Modular will give negative result for negative numerators.

// Type Conversion : Converting one data type to another.   (op -> operator(+,-,* etc))
// 1. int  op  int --> int
// 2. float  op  float --> float
// 3. float  op  int --> float

    float A = 3.0;
    int B = 2;
    printf("Product = %f\n", A *B); // Output: Sum = 4.000000
// NOTE : If we give type pf value %d C will give an error.
    printf("Divide = %f\n", A / B); // This will provide exact result (with decimal) as A in float.
    printf("Divide = %d\n", 3 / 2); // This will give integer result (without decimal).

// TO convert float to int : (It will remove all the integer)
    int f = (int)1.999999;
    printf("f = %d\n", f);

// Operator Precedence [BODMAS of C] : *,/,%  >  +,-  >  =
    int o = 4 + 9 * 10; // * > + > =    (Operation of different precedence)
    printf("o = %d\n", o);

// Assosciativity (or same precedence) : In this condition calculate from Left to Right till NO same precedence are left and after that calculate according to priority.
    int O = 4 * 3 / 6 * 2; // Operation of same precedence i.e * and / have same precedence(priority).
// Steps: 1. O = 12 / 6 * 2
//        2. O = 2 * 2
//        3. O = 4
    printf("O = %d\n", O);
    int m = 5 * 2 - 2 * 3; // Operation of same precedence
// Steps: 1. There are 2 * i.e. operation of same precedence. So use Assosciativity
//        2. m = 10 - 2 * 3  -> Now Calculate according to precedence.
//        3. m = 10 - 6
//        4. m = 4
    printf("m = %d\n", m);
    int n = 5 * (2 / 2) * 3;
// Steps: 1. In case of Brackets firstly Solve the brackets i.e. 2 / 2 = 1.
//        2. n = 5 * 1 * 3  -> Now Calculate according to precedence.
//        3. n = 5 * 3
//        4. n = 15
    printf("n = %d\n", n);
    int r = 5 + 2 / 2 * 3;
// Steps: 1.rom left to right firstly solve the high precedence , So r = 5 + ((2 / 2)*3)
//        2. r = 5 + (1 * 3)
//        3. r = 5 + 3
//        4. r = 8
    printf("r = %d\n", r);
    return 0;
}