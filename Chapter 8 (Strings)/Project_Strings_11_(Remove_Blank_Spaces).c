// WAP to remove blank spaces in a string


#include <stdio.h>
#include <string.h>

// Function Decalaration :
char blank(char str[100]);

// Function Call :
int main() {
    char str[100];
    printf("Enter a string : ");
    fgets(str, 100, stdin);

    blank(str);

    return 0;
}

// Function Definition :
char blank(char str[100]){
    for(int i = 0; i < 100; i++){
        if(str[i] == ' '){
            str[i] = '\0';
        }
    }
    printf("Modified String : %c\n", str);
}