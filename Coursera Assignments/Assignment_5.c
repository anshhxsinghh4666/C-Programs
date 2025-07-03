#include <stdio.h>
#include <math.h> /* for sin() and fabs() */

int main(void)
{ 
    double interval;
    int i;

    for (i = 0; i < 30; i++) {
        interval = i / 10.0;
        printf("sin(%lf) = %lf\t", interval, fabs(sin(interval)));  // Fabs is used to find absolute value
    }

    printf("\n+++++++\n");
    return 0;
}


// NOTE :  if sine(0.6)  is 0.564 then its absolute value is the same (0.564).
//         But if sine(2.4)  is -0.675 then its absolute value is 0.675. 