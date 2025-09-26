// LOGICAL OPERATORS : || (OR) , && (AND) , ! (NOT)

#include <stdio.h>

int main() {
    // AND (&&)
    printf("%d\n", 4 > 3 && 5 > 2);  //Output = 1 (True)
    printf("%d\n", 4 < 3 && 5 > 2);  //Output = 0 (False)

    // oR (||)
    printf("%d\n", 4 > 3 || 5 < 2);  //Output = 1 (True)

    // NOT (!)
    printf("%d\n", !(4 > 3));  //Output = 0 (False)
    printf("%d\n", !(4 < 3));  //Output = 1 (True)
    printf("%d\n", !(4 > 3 && 5 < 2));  // Output = 1 (True)
    return 0;
}

// Operator Precedence :

//         Priortity                Operator  (Left to right precedance)
//    1                     !
//    2                 * , / , %
//    3                   + , -
//    4              < , <= , > , >=
//    5                  == , !=
//    6                     &&
//    7                     ||
//    8                      =
