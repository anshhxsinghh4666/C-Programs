// WAP to convert all lowercase vowels to uppercase in a string.


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
    printf("String after converting lowercase vowels to uppercase: %s\n", (str));
    return 0;
}

// Function Definition :
void convert(char str[100]) {
    for(int i=0; i<strlen(str); i++){
        if(str[i] =='a' || str[i] =='e' || str[i] =='u' || str[i] =='i' || str[i] =='o'){
            str[i] = str[i]-32;
        }
    }  
}