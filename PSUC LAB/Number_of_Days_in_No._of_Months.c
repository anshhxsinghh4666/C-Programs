// Write a program to find the total no. of days for a given number of months counting from January month.
// a.	Example: m=3, days=31+ (28 0r 29) + 31


#include <stdio.h>

// Function Decalaration :
int leapyear(int year, int m);


// Function Call :
int main() {
    int year, m;
    printf("Enter Year : ");
    scanf("%d", &year);
    printf("Enter Number Of Months : ");
    scanf("%d", &m);

    leapyear(year, m);

    return 0;
}

// Function Definition :
int leapyear(int year, int m){
    int count = 0;
    if(year%400==0){
        printf("Year is a leap year\n");
        count = 1;
    }
    else if(year%100==0){
        printf("Year is not a leap year\n");
        count = 0;
    }
    else if(year%4==0){
        printf("Year is a leap year\n");
        count = 1;
    } 
    else{
        printf("Year is not a leap year\n");
        count = 0;
    }

    if (count == 0 ){
        int day = 0;
        int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i = 0; i < m; i++){
            day += month[i];
        } 
    printf("Total Number Of days : %d ", day);
    }

    else if (count == 1 ){
        int day = 0;
        int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i = 0; i < m; i++){
            day += month[i];
        } 
    printf("Total Number Of days : %d ", day);
    }


}