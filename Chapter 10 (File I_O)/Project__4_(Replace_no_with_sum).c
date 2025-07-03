// 2 numbers - a & b , are written in a file . WAP to replace them with their sum.

// NOTE : Before executing write 2 numbers in file 

#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/Project_4_(Replace_no_with_sum).txt" , "r");

    if(fptr == NULL){
        printf("Error opening File \n");
        return 1;
    }

    int a , b;
    fscanf(fptr, "%d %d", &a, &b);
    int sum = a+b;

    fclose(fptr);

    fptr = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/Project_4_(Replace_no_with_sum).txt" , "w");
    fprintf(fptr , "Sum = %d" , sum);

    fclose(fptr);
    
}