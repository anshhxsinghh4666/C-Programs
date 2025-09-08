// CONDITIONAL STATEMENTS :  if - else Statement

// Syntax:      if (condition) {
                    // do something if True
//              }
//              else if (condition) {
                    // do something if 1st is False & 2 nd is True 
//              }
//              else {
                    // doo something if False
//              }

// NOTE : if condition is compulsary but else statement is optional.

#include <stdio.h>

// Driving License Conditions
int main() {
    
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18 && age<60)  {      // Code inside {} is called Block. NOTE: {} is compulsary when there is more than one statement. But as a good programmer always use {}
        printf("Adult\n");
        printf("You are eligible for Driving License.\n");
    }
    else if (age < 18 && age >= 13) {
        printf("Teenager\n");
        printf("You are eligible for Learner's Driving License.\n");
    }
    else if (age >=60) {
        printf("Senior Citizen\n");
        printf("Not eligible for Driving.\n");
    }
    else {
        printf("Child\n");
        printf("You are not eligible for Driving.\n");
    }
    printf("Thanks You!\n");   //Always be printed at the end as it is out of the if-else block.


// Nested if-else statements : Positive/Negative & Even/Odd

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >=0) {
        printf("Positive number\n");
        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        }
        else {
            printf("%d is odd.\n", num);
        }
    }
    else {
        printf("Negative number\n");
        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        }
        else {
            printf("%d is odd.\n", num);
        }
    }

    return 0;    
}
