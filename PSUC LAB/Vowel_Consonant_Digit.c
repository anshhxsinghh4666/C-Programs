// Write a program to check whether the given character is a vowel, consonant, or digit.


#include <stdio.h>
#include <ctype.h> // For the 'isdigit' function

int main() {
    char ch;

    // Input the character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (isdigit(ch)!=0) {  // Gives a non zero value if the character is a digit
        printf("%c is a digit.\n", ch);
    }
    // Check if the character is a vowel
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    }
    // If it's not a vowel and it's a letter, it's a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    }
    else {
        printf("%c is not a letter or a digit.\n", ch);
    }

    return 0;
}