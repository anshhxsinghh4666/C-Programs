// WAP to check if a given number is Armstrong number or not

// Aromstrong Number : A number that is equal to the sum of its own digits each raised to the power of the number of digits.
//                     E.g. 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.


#include <stdio.h>
#include <math.h>

int main() {
    
    int Original_num;
    printf("Enter a number: ");
    scanf("%d", &Original_num);

    int len;
    printf("Enter the length of the number: ");
    scanf("%d", &len);

    int char1;
    printf("Enter 1st Character of Integer: ");
    scanf("%d", &char1);

    int char2;
    printf("Enter 2nd Character of Integer: ");
    scanf("%d", &char2);

    int char3;
    printf("Enter 3rd Character of Integer: ");
    scanf("%d", &char3);

    int sum = pow(char1, len) + pow(char2, len) + pow(char3, len);

    if(sum == Original_num) {
        printf("Armstrong number.\n");
    }
    else {
        printf("Not an Armstrong number.\n");
    }
    return 0;
}   