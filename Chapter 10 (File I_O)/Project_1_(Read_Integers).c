// Make a program to read 5 integers from a file 



#include <stdio.h>


int main() {
    FILE *fptr;  // We only have to define *fptr once.
    

    // Using Loop : 
    fptr = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/Project_1_(Read_Integers).txt" , "r");
    if(fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    int num;
    while(fscanf(fptr, "%d", &num) != EOF){
        printf("%d" , num);
    }
    printf("\n");
    fclose(fptr);


    // Without Using Loop :
    fptr = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/Project_1_(Read_Integers).txt" , "r");
    
    int num_;

    fscanf(fptr, "%d", &num_);
    printf("%d" , num_);
    fscanf(fptr, "%d", &num_);
    printf("%d" , num_);
    fscanf(fptr, "%d", &num_);
    printf("%d" , num_);
    fscanf(fptr, "%d", &num_);
    printf("%d" , num_);
    fscanf(fptr, "%d", &num_);
    printf("%d" , num_);
    
}