// WAF to calculate Percentage of a student from Marks in Science, Maths, French.

#include <stdio.h>

// Function Declaration :
float percentage(float science, float maths, float french);

// Function Call :
int main() {
    float science, maths, french;
    printf("Enter your Science Marks:");
    scanf("%f",&science);
    printf("Enter your Maths Marks:");
    scanf("%f",&maths);
    printf("Enter your French Marks:");
    scanf("%f",&french);

    printf("Total Percentage : %f\n", percentage(science, maths, french));
    
    return 0;
}

// Function Definition :
float percentage(float science, float maths, float french){
    float totalMarks = science + maths + french;
    float TotalPercentage = (totalMarks / 300.0) * 100.0;
    return TotalPercentage;
}
