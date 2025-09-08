// STRING FUNCTIONS :

// gets(str) -> input a string (even multiword with spaces)
// NOTE : gets(str) is Dangerous and outdated because many software got hacked using this because 
// gets donot track the max size of string so we generally donot use gets.

// puts(str) -> Output a string 
// NOTE : puts(str) and fgets(str) automatically gives a next line character after printing and fgets(str) captures a newline character
//        So when we use strlen(str) after using fgets or puts it will tell lenght 1 bigger because it will also count \n

// fgets(str, n, file) -> Check Notepad 


#include <stdio.h>

int main() {
    char str[100];
    printf("Enter Your Full Name : ");
    gets(str);
    puts(str);
    
    char str_[100];
    printf("Enter Your Full Name : ");
    fgets(str_, 100, stdin);
    puts(str_);  // puts automatically gives a next line character \n

    return 0;
}