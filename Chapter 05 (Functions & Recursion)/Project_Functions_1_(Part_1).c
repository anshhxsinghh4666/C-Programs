// WAF that prints Namaste if user is Indian & Bonjour if the user is French.


#include <stdio.h>

void Lang();

int main() {
    Lang();
    return 0;
}

void Lang() {
    char n;
    printf("Nationality (French(f)/Indian(i):)");
    scanf("%c", &n);
        if (n=="f") {
            printf("Bonjour!\n");
        }
        else if (n=="i") {
            printf("Namaste!\n");
        }
}


// OR

// Check File Project_Functions_1_(Part_2).c for another alternative.


