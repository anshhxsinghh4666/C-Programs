// WAP to find the area of triangle


#include <stdio.h>

// Function Decalaration :
float area(float b, float h);
float area_(float a , float b, float c);

// Function Call :
int main() {
    float a , b , c , b_ , h;
    int r;
    printf("Press 1 to enter Base and Height OR Press 2 for sides : ");
    scanf("%d", &r);
    if(r == 1){
        printf("Enter Base : ");
        scanf("%f", &b_);
        printf("Enter Height : ");
        scanf("%f", &h);
        printf("Area = %f ", area(b_, h));
    }
    else if (r == 2){
        printf("Enter Sides \n");
        printf("A = ");
        scanf("%f", &a);
        printf("B = ");
        scanf("%f", &b);
        printf("C = ");
        scanf("%f", &c);
        printf("Area = %f", area_(a,b,c));;
    }
    else {
        printf("Invalid Input");
    }
    
    return 0;
}

// Function Definition :
float area(float b_, float h){
    float area = (b_ * h) / 2;
    return area;
}

float area_(float a, float b, float c){
    if(a+b>c && b+c>a && a+c>b){
        printf("Valid Traingle \n");
        float area = (a+b+c)/2;
        return area;
    }
    else{
        printf("Invalid Traingle");
    }
}
