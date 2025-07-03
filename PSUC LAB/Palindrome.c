// Write a program to check whether a given integer no. is palindrome or not.

#include <stdio.h>
#include <string.h>
int main() {
    char num[100], cpy[100];

    printf("Enter Number");
    scanf("%s", num);
    int n = strlen(num);

    strcpy(cpy,num);
    
    for(int i = 0; i <n/2; i++){
        int firstval = cpy[i];
        int revFirstval = cpy[n-i-1];
        cpy[i]=revFirstval;
        cpy[n-i-1]=firstval;
    }

    if(strcmp(cpy,num)==0){  //strcmp compares two strings and returns 0 if they are same
        printf("It is a Palindrome");
    }
    else {
        printf("It is NOT a Palindrome");
    }

    return 0;
    
}