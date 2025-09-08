// Ask the user to enter their firstName & print it back to them.

// Also try with full name. Check file Project_Strings_2.2.c 



#include <stdio.h>

// Function Decalaration :
void name(char arr[]);

// Function Call :
int main() {
    char name_[50];
    
    name(name_);
    
    return 0;
}

// Function Definition :
void name(char name_[50]){
    printf("Enter Name : ");
    scanf("%s", name_);
    printf("%s\n", name_);
}