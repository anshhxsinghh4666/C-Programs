// WAP to create a calculator performing following operations :
// 1. Addition 
// 2. Substraction
// 3. Multiplication 
// 4. Division 



#include <stdio.h>

// Function Decalaration :
void sum();
void subs();
void mult();
void divi();

// Function Call :
int main() {
    sum();
    subs();
    mult();
    divi();
    return 0;
}

// Function Definition :
void sum(){
    float a , b;
    printf("Enter N1 : ");
    scanf("%f", &a);
    printf("Enter N2 : ");
    scanf("%f", &b);
    printf("Sum : %.2f\n", a + b);
}

void subs(){
    float a, b;
    printf("Addition : \n");
    printf("Enter N1 : ");
    scanf("%f", &a);
    printf("Enter N2 : ");
    scanf("%f", &b);
    printf("Subtraction : %.2f\n", a - b);
}

void mult(){
    float a, b;
    printf("Enter N1 : ");
    scanf("%f", &a);
    printf("Enter N2 : ");
    scanf("%f", &b);
    printf("Multiplication : %.2f\n", a * b);
}

void divi(){
    float a, b;
    printf("Enter N1 : ");
    scanf("%f", &a);
    printf("Enter N2 : ");
    scanf("%f", &b);
    printf("Division : %.2f\n", a/b);
}