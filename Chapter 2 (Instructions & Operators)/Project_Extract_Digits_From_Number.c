// WAP to extract digits from a 4 digit number :

#include <stdio.h>

int main() {
    int n;
    printf("Enter a 4 digit Number : ");
    scanf("%d", &n);

    if (n > 9999 && n < 1000) {
        printf("Invalid Input");
        return 0;
    }

    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;

    printf("Digit 1 : %d \n Digit 2 : %d \n Digit 3 : %d \n Digit 4 : %d", d1, d2, d3, d4);

    return 0;
}