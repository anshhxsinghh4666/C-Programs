// WAF to convert Celsius to fahrenheit.


#include <stdio.h>

// Function Declaration :
float convertTemp(float degrees);

// Function Call : 
int main() {
    float degrees;
    printf("Celcius :");
    scanf("%f", &degrees);

    float far = convertTemp(degrees);
    printf("Fahrenheit: %f\n", far);
    
    return 0;
}

// Function Definition :
float convertTemp(float degrees) {
    float far = degrees * (9.0/5.0) + 32;
    return far;
}