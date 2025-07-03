// WAP to print the highest frequency character in a string.


#include <stdio.h>
#include <string.h>

// Function Decalaration :
int frequency(char str[100], char a);

// Function Call :
int main() {
    char str[100];
    char a;
    printf("Enter A String : ");
    fgets(str, 100, stdin);
    printf("Enter The Character : ");
    scanf("%c", &a);

    printf("Frequency of Character %c : %d\n ", a, frequency(str, a));
    
    return 0;
}

// Function Definition :
int frequency(char str[100], char a){
    int count = 0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] == a){
            count++;
        }
    }
    return count;
}