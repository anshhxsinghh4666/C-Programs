// WAP to Find whether the year is a leap year or not.

#include <stdio.h>

int main() {
    int year;
    printf("Enter Year : ");
    scanf("%d", &year);

    if(year%400==0){
        printf("it's a leap year");
    }
    else if(year%100==0){
        printf("it's NOT a leap year");
    }
    else if(year%4==0){
        printf("it's a leap year");
    }
    else{
        printf("it's not a leap year");
    }

    return 0;
}