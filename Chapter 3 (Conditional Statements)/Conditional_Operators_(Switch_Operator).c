// CONDITIONAL OPERATORS :

// Switch Operator

// Syntax :    switch(variable) {
//         case number1:  // do something
//             break;
//         case number2:  // do something
//             break;
//         }

// NOTE : IF we donot add break after each case then the compiler will move on to next case and print the output until it finds break.


#include <stdio.h>

int main()
{
    int day1; // 1-mon , 2-Tue, 3-Wed, 4-Thu, 5-Fri, 6-sat, 7-sun
    printf("Enter the day1 number (1-7): ");
    scanf("%d", &day1);

    switch (day1)
    {
        case 1:
            printf("Monday1\n");
            break;
        case 2:
            printf("Tuesday1\n");
            break;
        case 3:
            printf("Wednesday1\n");
            break;
        case 4:
            printf("Thursday1\n");
            break;
        case 5:
            printf("Friday1\n");
            break;
        case 6:
            printf("Saturday1\n");
            break;
        case 7:
            printf("Sunday1\n");
            break;
        default:
            printf("Invalid day1 number\n");
    }

    char day2; // 'm'-mon , 't'-Tue, 'w'-Wed, 'T'-Thu, 'f'-Fri, 's'-Sat, 'S'-Sun
    printf("Enter the day1 (m/t/w/T/f/s/S): ");
    scanf(" %c", &day2);

    switch (day2) 
    {
        case 'm':
        case 'M':  // Now 'M'and 'm' will print same output as we din't add break between case'm' and case 'M'
            printf("Monday2\n");
            break;
        case 't':
            printf("Tuesday2\n");
            break;
        case 'w':
            printf("Wednesday2\n");
            break;
        case 'T':
            printf("Thursday2\n");
            break;
        case 'f':
            printf("Friday2\n");
            break;
        case's':
            printf("Saturday2\n");
            break;
        case 'S':
            printf("Sunday2\n");
            break;
        default:
            printf("Invalid day2 character\n");
    }

}
// NOTE: For concept check notebook. 

// Switch Properties:   1. Cases can be in any order.
//                      2. Nested Switch (switch inside switch) are allowed.


