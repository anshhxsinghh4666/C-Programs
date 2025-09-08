// WAF that prints Namaste if user is Indian & Bonjour if the user is French.


#include <stdio.h>

void Namaste();
void Bonjour();

int main() {
    printf("Enter i for Indian and f for french :");
    char ch;
    scanf("%c", &ch);
    if (ch == 'i') {
        Namaste();  //Calling Function Namaste
    }
    else {
        Bonjour();  // Calling Function Bonjour
    }
    return 0;
}

void Namaste() {
    printf("Namaste!\n");
}

void Bonjour() {
    printf("Bonjour!\n");
}
