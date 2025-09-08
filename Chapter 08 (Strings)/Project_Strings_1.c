// Create a string firstName & lastName to store details of user & print all the characters using a loop.


#include <stdio.h>

// Function Decalaration :
void name(char arr[]);

// Function Call :
int main() {
    char firstName[] = "Ansh";
    char lastName[] = "Singh";

    name(firstName); 
    name(lastName);

    return 0;
}

// Function Definition :
void name(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

// If we use %s as format specifier then no need to use loop to print the name , 
// Check File : Project_Strings_2.c
