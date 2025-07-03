// EOF (End of File) : fgetc returns EOF to show that the file has ended.



#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/sample_5.txt" , "r");
    
    char ch;
    // ch = fgetc(fptr);
    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    
    printf("\n"); 
    fclose(fptr);
}