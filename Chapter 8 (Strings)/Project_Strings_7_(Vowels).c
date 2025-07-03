// WAF to count the occurrence of vowels in a string.


#include <stdio.h>
#include <string.h>

// Function Decalaration :
int vowel(char str[100]);

// Function Call :
int main() {
    char str[100];
    printf("Enter a String : ");
    fgets(str, 100, stdin);

    printf("Number of vowels in the string : %d\n", vowel(str));
    return 0;
}

// Function Definition :
int vowel(char str[100]){
    int count = 0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] =='a' || str[i] =='e' || str[i] =='u' || str[i] =='i' || str[i] =='o'){
            count++;
        }
        else if(str[i] =='A' || str[i] =='E' || str[i] =='I' || str[i] =='O' || str[i] =='U'){
            count++;
        }
        else{
            continue;
        }
    }
    return count;  
}