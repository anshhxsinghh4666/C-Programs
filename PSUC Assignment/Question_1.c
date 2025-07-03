// Write a C program that performs the following tasks sequentially.
/*
Declare a variable named ‘temperature’ of type ‘float’.
Read the value of ‘temperature’ from user.
Prints the following messages based upon the value of ‘temperature’
(i) Prints “Freezing Weather” if ‘temperature is less than 0
(ii) Prints “Very Cold Weather” if 0 <= temperature <10
(iii) Prints “Cold Weather” if 10 <= temperature <20
(iv) prints “Normal Weather” if temperature >= 20
*/



#include <stdio.h>

int main() {
    float temp;
    printf("Enter temperature: ");
    scanf("%f", &temp);

    if(temp < 0){
        printf("Freezing Weather");
    }
    else if(temp>=0 && temp<10){
        printf("Very Cold Weather");
    }
    else if(temp>=10 && temp<20){
        printf("Cold Weather");
    }
    else{
        printf("Normal Weather");
    }

    return 0;
}