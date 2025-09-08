// Ask user to enter their Full Name & print it back to them.



#include <stdio.h>

// Function Decalaration :
void name(char str[100]);

// Function Call :
int main() {
    char str[100];

    name(str);
    return 0;
}

// Function Definition :
void name(char str[100]){
    printf("Enter Your Full Name : ");
    fgets(str, 100, stdin);
    puts(str);  // puts automatically gives a next line character \n
}