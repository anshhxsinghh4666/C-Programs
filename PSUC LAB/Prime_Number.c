// WAP to Find wheather the given Number is prime or NOT

#include <stdio.h>

int main() {
    int num, isprime=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num<=1){
        printf("Number is NOT PRIME!");
        return 0;
    }

    for(int i=2; i<=num/2; i++){  // OR Use for(int i = 2; i<=sqrt(num); i++)
        if(num%i==0){
            isprime=0;
            break;
        }
    }

    if(isprime==0){
        printf("Number is NOT PRIME!");
    }
    else {
        printf("Number is PRIME!");
    }

    return 0;
}
