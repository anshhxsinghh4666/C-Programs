// Create a structure to store complex numbers. (Use arrow operator)


#include <stdio.h>
#include <string.h>

// Structure Declaration :
typedef struct Complex_Numbers{
    int real;
    int imag;
} cpx;

// Structure Call/Use :
int main() {
    cpx c1;
    cpx *ptr = &c1;

    printf("Enter Imaginary Part : ");
    scanf("%d", &ptr->real);

    printf("Enter Real Part : ");
    scanf("%d", &ptr->imag);

    printf("Complex Number : %d+%di", ptr->real, ptr->imag);

    return 0;
}
