// Write a program to check if the given string is a palindrome or not.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100] , strcpy_[100];
    printf("Enter String : ");
    fgets(str, 100, stdin);
    strcpy(strcpy_, str);

    int len = strlen(str)-1;

    for(int i=0 ; i<len/2; i++){
        int firstchar = str[i];
        int revfirstchar = str[len-1-i];
        str[i]=revfirstchar;
        str[len-1-i]=firstchar;
    }

    int cmp = strcmp(str, strcpy_);
    if(cmp==0){
        printf("The given string is a palindrome.");
    }
    else{
        printf("The given string is not a palindrome.");
    }s

    return 0;

}