// WAP to write all the odd numbers from 1 to n in a file.



#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/Project_3_(Write_n_Odd_Numbers).txt" , "w");

    if(fptr == NULL){
        printf("Error opening File \n");
        return 1;
    }

    int n;
    printf("Enter Number of Odd Number : ");
    scanf("%d", &n);
    
    for(int i=0 ; i<n ; i++){
        if(i%2!=0){
            fprintf(fptr, "%d ", i);
        }
    } 
    return 0;
}