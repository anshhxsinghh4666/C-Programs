// RELATIONAL OPERATORS : ==, !=, <, >, <=, >=

// NOTE: In C True is stored as 1 and False is stored as 0.

#include <stdio.h>
#include <math.h>

int main()
{
    printf("%d\n", 4 == 4); // Output = 1 (True)
    printf("%d\n", 4 == 3); // Output = 0 (False)
    printf("%d\n", 4 < 3);  // Output = 0 (False)
    printf("%d\n", 4 > 3);  // Output = 1 (True)
    printf("%d\n", 4 > 4);  // Output = 0 (False)
    printf("%d\n", 4 >= 4); // Output = 1 (True)
    printf("%d\n", 4 != 4); // Output = 0 (False)
    return 0;
}