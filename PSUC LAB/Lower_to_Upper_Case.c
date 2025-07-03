// Write a program to change all lower-case letters into upper case in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter Sentance");
    fgets(str, 100, stdin);

    for(int i=0; i<strlen(str); i++) {
        if(str[i]!=32 && str[i]>=97){
            str[i] = str[i] - 32;
        }
    }

    printf("String after editing : %s\n", str);

    return 0;
}