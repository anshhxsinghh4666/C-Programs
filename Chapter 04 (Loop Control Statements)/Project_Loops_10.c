// WAP to calculate the sumof all numbers between 5 to 50. (including 5 & 50)


#include <stdio.h>

int main () {
    int i=5; 

// While Loop :
    int sum1=0;
    while (i<=50) {
        sum1 += i;
        i++;
    }
    printf("Sum of Numbers Btw 5 to 50 is %d\n", sum1);

// For loop :
    int sum2=0;
    for(int i=5; i<=50; i++) {
        sum2+=i;
    }
    printf("Sum of Numbers Btw 5 to 50 is %d\n", sum2);

// Do_While Loop :
    int sum3 = 0;
    int j=5;
    do {
        sum3+=j;
        j++;
    }while(j<=50);
    printf("Sum of Numbers Btw 5 to 50 is %d\n", sum3);
}

