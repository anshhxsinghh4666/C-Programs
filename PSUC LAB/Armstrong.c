// Write a program to check whether the given number is Armstrong or not. 
// An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself.
// For example, 371 is an Armstrong number since 33 + 73 + 13 = 371.

#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    char num[100];
    printf("Enter Number : ");
    scanf("%s", &num);

    int len = strlen(num);
    int count = 0;
    int c = 0;

    for(int i=0; i<len; i++){
        if(isdigit(num[i])){
            int digit = num[i]-'0';  // num[i] - '0' give the number stored in num[i] in integer form
            count+=pow(digit, 3);
            c = c*10 + digit;  // Converts The array to Number 
        }
    }  

    if(c == count){
        printf("%d is an Armstrong number.", c);
    }
    else{
        printf("%d is not an Armstrong number.", c);
    }

    return 0;
}



