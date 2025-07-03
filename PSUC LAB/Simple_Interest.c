// Write a C Program to Calculate Simple Interest


#include <stdio.h>

int main() {
    float p, r, t, si;
    printf("Enter Principal (P) : ");
    scanf("%f", &p);
    printf("Enter Rate (R) : ");
    scanf("%f", &r);
    printf("Enter Time (T) : ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest (SI) : %f ", si);
    
    return 0;
}