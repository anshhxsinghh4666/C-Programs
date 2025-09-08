// SALTING : Check Notepad for info.

// Find the salted form of a password entered by the user if the salt is "123" & added at the end.
// Example : pass entered by user = "test"
//           salt = "123"
//           new passowrd = "test123"



#include <stdio.h>
#include <string.h>

// Function Decalaration :
void salting(char pass[]);

// Function Call :
int main() {
    char pass[100];
    printf("Enter password : ");
    scanf("%s", pass);

    salting(pass);
    return 0;
}

// Function Definition :
void salting(char pass[]) {
    char salt[] = "123";
    char newpass[200];
    strcpy(newpass, pass);
    strcat(newpass, salt);
    puts(newpass);
}