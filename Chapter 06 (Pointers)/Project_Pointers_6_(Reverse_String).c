#include <stdio.h>

int main() {
    char str[100], *start, *end, temp;
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // read string including spaces

    // Step 1: find length manually using pointer
    start = str;
    while (*start != '\0') {
        length++;
        start++;
    }

    // Step 2: set start and end pointers
    start = str;
    end = str + length - 1;  // point to last character

    // Step 3: swap characters using pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}