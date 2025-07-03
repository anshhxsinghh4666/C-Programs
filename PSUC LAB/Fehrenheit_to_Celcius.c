// Write a C program for Fahrenheit to Celsius Conversion.
// 	Celsius = (Fahrenheit – 32) * 5.0 /9.0


#include <stdio.h>
#include <math.h>

int main(){
    float c, f;
    printf("Enter Fahrenheit : ");
    scanf("%f" , &f);
    c = (f-32) * 5.0/9.0 ;
    printf("Celcius : %f ", c);

    return 0;
}