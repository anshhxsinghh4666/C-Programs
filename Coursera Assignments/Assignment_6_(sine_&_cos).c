// Write a C program that has a function that prints a table of values for sine and cosine between (0, 1). Upload your program as a text file. 


#include <stdio.h>
#include <math.h> /* for sin() and fabs() */

int main(void)
{ 
    double interval;
    int i;

    for (i = 0; i <= 10; i++) {
        interval = i / 10.0;
        printf("sin(%lf) = %lf\t\n", interval, fabs(sin(interval)));  // Fabs is used to find absolute value
        printf("cos(%lf) = %lf\t\n", interval, fabs(cos(fabs(interval))));
    }

    printf("\n+++++++\n");
    return 0;
}
