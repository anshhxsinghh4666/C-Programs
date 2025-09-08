// WAP a program tp replace lowercase letters with upeercase & vice versa in a string.


#include <stdio.h>
#include <string.h>

// Function Decalaration :
void convert(char str[100]);

// Function Call :
int main() {
    char str[100];
    printf("Enter a string : ");
    fgets(str, 100, stdin);
    
    convert(str);
    printf("String after Modification : %s\n", (str));
    return 0;
}

// Function Definition :
void convert(char str[100]) {
    for(int i=0; i<strlen(str); i++){
        if(str[i]>=97 && str[i]<=122){
            str[i] = str[i]-32;
        }
        else if(str[i]>=65 && str[i]<=90){
            str[i] = str[i]+32;
        }
        else{
            continue;  // Ignore non-alphabetic characters.
        }
    }  
}