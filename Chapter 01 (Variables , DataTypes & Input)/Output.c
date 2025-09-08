// OUTPUT :

// Syntax :   printf("Hello, World!");
//            printf("Hello, World!\n");  // \n is a Newline character

//            Cases : Here the Variable like age will replace the value of %d , Similary others.
// -> Integers : printf("age is %d", age);
// -> Real Numbers : printf("average is %f", pi);
// -> Characters : printf("character is %c", star);

#include <stdio.h>
int main()
{
    // This Will print Hello, World! twice in same line.
    printf("Hello World!");
    printf("Hello World!");
    printf("Hello World!\n");

    // This Will print Hello, World! twice in different lines.

    printf("Hello World!\n");
    printf("Hello World!\n");

    int age = 18;
    printf("My age is %d \n", age);

    float pi = 3.14159;
    printf("Value of Pi is %f \n", pi);

    char star = '*';
    printf("Character is %c \n", star);
    return 0;
}




