// Make  program that inputs user's name & prints its length.


#include <stdio.h>

// Function Decalaration :
int countlength(char arr[]);

// Function Call :
int main() {
    char arr[100];
    printf("Enter Your Name : ");
    fgets(arr, 100, stdin);
    
    printf("length of Your Name : %d\n", countlength(arr));
    return 0;
}

// Function Definition :
int countlength(char arr[]){
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++){
            if (arr[i]==' '){
                count--;
            }
        count++;
    }
    return count-1;  // becuase 'count' is increasing as 'i' is increasing , so 'i' will also count \0 at the end so
    // it will print length increased by 1.  
}