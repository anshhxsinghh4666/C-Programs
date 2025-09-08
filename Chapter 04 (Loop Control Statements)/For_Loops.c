// FOR LOOP :

// Syntax: for (initialization; stoping condition; updation) { 
//         statement(s); }


#include <stdio.h>
int main() {    // i in the below code is called iterator or counter.

// Print 'Hello World' 5 times
    for (int i = 1; i <= 5; i+=1) {
        printf("Hello World\n");
    }
    printf("Loop Ended\n");

// Print the numbers from 1 to 10
    for(int i=1; i<=10; i++) {   // i+=1 can be written as i++ in C.
        printf("%d\n", i);
    }
    printf("Loop Ended\n");

// Print Numbers from 10 to 1 in reverse order
    for (int i = 10; i >= 1; i=i-1) {
        printf("%d\n", i);
    }
    printf("Loop Ended\n");

// Print float from 1 to 5
    for(float i=1.0; i<=5.0; i++) {
        printf("%f\n", i);
    }
    printf("Loop Ended\n");

// Print the characters from 'a' to 'z'
    for(char ch='a'; ch<='z'; ch++) {  //in place of character we can use there ASCII value.
        printf("%c\n", ch);
    }
    printf("Loop Ended\n");

// Infinite loop : Since there is no stopping condition so loop will run indefinitely.
    // for (int i = 1; ; i++) {
    //     printf("This is an Infinite Loop\n");
    // }

    return 0;
}
