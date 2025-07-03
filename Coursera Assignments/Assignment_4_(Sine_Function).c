// WAP that prints the sine function for an input x between (0, 1)


#include <stdio.h>
#include <math.h>  

int main() {
    float x;
    printf("Enter a value for x (Between 0 to 1) : ");
    scanf("%f", &x);

    if(x>=0 && x<=1){
        double sine = sin(x);
        printf("The sine of %f is %f\n", x, sine);
    }
    else{
        printf("Invalid input. Please enter a value between 0 and 1.\n");
    }
    
    return 0;

}