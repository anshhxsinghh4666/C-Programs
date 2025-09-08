// INPUT :

// Syntax :   scanf("Type of val", &Variable);    -> Here Variable is int type so we will use %d in type of value
//              Example : scanf("%d", &age);

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is: %d", age);
    return 0;
}

