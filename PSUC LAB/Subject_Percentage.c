// WAP to calculate the percentage of 5 subject marks


#include <stdio.h>

// Function Decalaration :
void marks();


// Function Call :
int main() {
    marks();
    return 0;
}

// Function Definition :
void marks(){
    float a, b, c, d, e , Percentage;
    printf("Enter Marks of Sunject 1 : ");
    scanf("%f" , &a);
    printf("Enter Marks of Sunject 2 : ");
    scanf("%f" , &b);
    printf("Enter Marks of Sunject 3 : ");
    scanf("%f" , &c);
    printf("Enter Marks of Sunject 4 : ");
    scanf("%f" , &d);
    printf("Enter Marks of Sunject 5 : ");
    scanf("%f" , &e);

    Percentage = ((a + b + c + d + e) / 5);
    printf("Percentage = %f\n", Percentage);
}