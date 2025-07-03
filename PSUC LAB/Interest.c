// WAP to take value of amount to be borrowed from user and set the rate of interest as :
//   -> 9% if amount to be borrowed is less than 10k
//   -> 8% if amount to be borrowed is more than 10k


#include <stdio.h>

// Function Decalaration :
void interest();

// Function Call :
int main() {
    interest();
    return 0;
}

// Function Definition :
void interest(){
    int amount;
    float rate;
    float time;

    printf("Enter Amount to be borrowed : ");
    scanf("%d", &amount);
    printf("Enter Time : ");
    scanf("%f", &time);

    if(amount < 10000){
        rate = 9.0;
    }
    else{
        rate = 8.0;
    }

    printf("Interest Rate : %f\n", rate);
    printf("Interest : %f", (rate*amount*time)/100);
}