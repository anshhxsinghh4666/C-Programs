// Write a program to count the number of words in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a Sentence : ");
    // scanf("%s", str); NOTE : We can't use this as this stops reading after 1st whitespace.
    fgets(str, 100 , stdin);
    
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    printf("Number of Words : %d", count-1);  // We are using count-1 because while using fgets(str) it captures a newline character.
    return 0;
}