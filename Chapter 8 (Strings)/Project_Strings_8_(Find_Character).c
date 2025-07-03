// Check if a given character is present in a string or not.


#include <stdio.h>
#include <string.h>

// Function Decalaration :
void find(char str[100]);

// Function Call :
int main() {
    char str[100];
    printf("Enter a string : ");
    fgets(str, 100, stdin);

    find(str);
    return 0;
}

// Function Definition :
void find(char str[100]){
    char a;
    printf("Enter the character : ");
    scanf("%c", &a);
    for(int i=0; i<strlen(str); i++){
        if(a==str[i]){
            printf("Character found at Index %d\n", i);
        }
        else{
            continue;
        }
    }
}