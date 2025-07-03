// Write a program to reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string : ");
    fgets(str,100,stdin);

    int len=strlen(str)-1;

    for(int i=0; i<len/2; i++) {
        char firstchar=str[i];
        char revfirstchar=str[len-1-i];
        str[len-1-i]=firstchar;
        str[i]=revfirstchar;
    }

    puts(str);

    return 0;
}