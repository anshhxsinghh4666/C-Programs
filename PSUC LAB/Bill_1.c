// Write a program to calculate a bill for internet browsing. The conditions are given below: Minimum Rs. 200 for up to 100 calls.
// Plus, Rs. 0.60 per call for the next 50 calls. Plus, Rs. 0.50 per call for the next 50 calls.
// Plus, Rs. 0.40 per call for any call beyond 200 calls


#include <stdio.h>

int main() {
    int calls;
    float bill;

    if(calls < 0 ){
        printf("Invalid Input");
        return 0;
    }

    printf("Enter Number of Calls :");
    scanf("%d", &calls);

    if(calls<=100){
        bill = 200;
        printf("Amount : %f ", bill);
    }
    else if (calls<=150){
        bill = 200 + (calls - 100)*0.6;
        printf("Amount : %f ", bill);
    }
    else if (calls<=200){
        bill = 200 + (50*0.6) + (calls - 150)*0.5;
        printf("Amount : %f ", bill);
    }
    else{
        bill = 200 + (50*0.6) + (50*0.5) + (calls - 200)*0.4;
        printf("Amount : %f ", bill);
    }
    
    return 0;
}