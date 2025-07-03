// WAP to take a number from user and print its reverse


#include <stdio.h>

int main(){
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num!=0) {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }

    printf("The reverse of the number is: %d\n", reverse);

    return 0;
}




#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char num[100];  // Declare num as a string (character array)
    printf("Enter Number: ");
    scanf("%s", num);  // Read the number as a string

    int len = strlen(num);  // Get the length of the string
    int sum = 0;  // Sum to store the sum of cubes of digits
    int originalNum = 0;  // To store the original number

    // Calculate the sum of the cubes of digits
    for (int i = 0; i < len; i++) {
        int digit = num[i] - '0';  // Convert the character to an integer
        sum += pow(digit, 3);       // Add the cube of the digit to sum
        originalNum = originalNum * 10 + digit;  // Reconstruct the original number
    }

    // Check if the sum of cubes is equal to the original number
    if (originalNum == sum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}