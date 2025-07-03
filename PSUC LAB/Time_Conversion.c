// Write a program to convert the time in seconds to hours, minutes, and seconds. (1 hr = 3600 sec).


#include <stdio.h>

int main() {
    float sec;

    printf("Enter Time in seconds : ");
    scanf("%f", &sec);

    float hours = sec / 3600;
    float min = sec / 60;

    printf("Time in Hours %f : \n", hours);
    printf("Time in Minutes %f : \n", min);

    return 0;
}