// Take a string input from the user using %c.


#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i = 0;

    while(ch != '\n'){ // So when the user presses Enter the loop stops
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    } 
    // The above Loop acts as gets or fgets. 

    str[i] = '\0';  // In this case Null character will not be added in the last by compiler automatically so we have to add it ourselves.
    puts(str);
    return 0;
}

