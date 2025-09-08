// STRINGS : 

// String Format Specifier : "%s"

// Syntax Output :  char name[] = "ANSH";
//                  printf("%s", name);
// Using %s there is no need to use loop and access the char one by one , %s will print all at once.
// When we are using %s then there is no need to use \0 as compiler will automatically add it for you.

// Syntax Input : char name[40];
//                scanf("%s", name);
// NOTE : There is no need to use &name because name is an string and string is an character array and an array is a pointer itself. So no need to use &name.



#include <stdio.h>

int main() {
    char name[40];
    printf("Enter Your Name:");
    scanf("%s", name);
    printf("Your name is : %s", name);
    return 0;
}

