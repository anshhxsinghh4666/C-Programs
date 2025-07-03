// WAP to take age from user and display he/she can vote.


#include <stdio.h>

// Function Decalaration :
void age();

// Function Call :
int main() {
    age();
    return 0;
}

// Function Definition :
void age() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
}