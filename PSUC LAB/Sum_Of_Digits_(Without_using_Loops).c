// Write a program to find the sum of the digits of a four-digit number (ex. 1234 sum=10) (without using a loop).


#include <stdio.h>

int main() {
    int n;
    printf("Enter Number :" );
    scanf("%d", &n);

    if(n<1000){
        printf("Enter a 4 Digit Number : ");
        return 0;
    }

    int sum = 0;
    
    int thousands = n/1000;
    int hund = (n%1000)/100;
    int tens = ((n%1000)%100)/10;
    int once = ((n%1000)%100)%10;

    sum = thousands + hund + tens + once;

    printf("Sum of Digits : %d", sum);

    return 0;
}
