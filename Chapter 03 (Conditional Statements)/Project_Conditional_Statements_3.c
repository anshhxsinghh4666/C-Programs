// WAP to find if a character entered by user is upper case or not.

#include <stdio.h>

int main() {
    char character1;
    printf("Enter character1:");
    scanf("%c", &character1);

    if(character1 >= 'A' && character1 <= 'Z') {
        printf("%c is Uppercase.\n", character1);
    } 
    else if(character1 >= 'a' && character1 <= 'z') {
        printf("%c is not Uppercase.\n", character1);
    }
    else {
        printf("NOT English Character.\n");
    }


    // NOTE: Every character is Associated with ASCII value. They Are in increasing order as we go from A-Z or a-z.
    //       A  and a has differet ASCII values.
    //       A-Z : 65 to 90
    //       a-z : 97 to 122
    //       In the above program, we can also input the ASCII value in place of the character.

    // Check the program below : 

    // char character2;
    // printf("Enter character2:");
    // scanf("%d", &character2);

    // if(character2 >= 65 && character2 <= 90) {
    //     printf("%c is Uppercase.\n", character2);
    // }
    // else if(character2 >= 97 && character2 <= 122) {
    //     printf("%c is not Uppercase.\n", character2);
    // }
    // else {
    //     printf("NOT English Character.\n");
    // }

    return 0;
} 


