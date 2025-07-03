//  Write a C Program to calculate distance covered by car when time, velocity and accelerationis given.
//  s = vi * t + 1.0/2.0 *a * t * t;


#include <stdio.h>
#include <math.h>

int main(){
    float t , v , a;
    printf("Enter Time (sec) : ");
    scanf("%f", &t);
    printf("Enter Velocity (m/s) : ");
    scanf("%f", &v);
    printf("Enter acceleration (m/s^2) : ");
    scanf("%f", &a);

    float distance = v * t + (1.0/2.0) * a * pow(t,2);

    printf("Distance : %f ", distance);

    return 0;
}