// WAF to print price after adding 18% GST.


#include <stdio.h>

// Function Declaration :
void calculatePrice(float value);  // Parameter

// Function Call :
int main() {
    float value;
    printf("Enter Price Excluding GST:");
    scanf("%f", &value);  // Enter 100
    printf("Original Value: %f\n", value);

    calculatePrice(value); // Function Calling , Argument

    return 0;
}

// Function Definition :
void calculatePrice(float value) {  // Parameter
    value = value + (value*0.18);
    printf("Price Including GST: %f\n", value);
}


// NOTE : Value of 'value' according to function definition is 118 but
//        the statement printf("Original Value: %f\n", value); in Function call donot print the 18% GST calculate value , instead it 
//        prints the value entered by user
// Reason : Changes to Parameters is function don't change the value in Calling Function. Because a copy of argument is passed to the function , not the original argument. So any changes made in the copy of argument won't change the original argument.
