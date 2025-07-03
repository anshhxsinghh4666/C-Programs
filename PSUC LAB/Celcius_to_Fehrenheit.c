// Write a C program for Degree Celsius to f conversion is:
// 	f = 9/5 x c + 32


#include <stdio.h>
#include <math.h>

int main(){
    float c, f;
    printf("Enter Celcius : ");
    scanf("%f" , &c);
    f = (9.0/5.0) * c + 32;
    printf("Fehrenheit : %f ", f);

    return 0;
}