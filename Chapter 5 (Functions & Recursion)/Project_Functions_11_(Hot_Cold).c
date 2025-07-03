// WAF to print "Hot" or "Cold" depends on the temperature user enter.


#include <stdio.h>

// Function Declaration :
void temp(int n);

// Function Call
int main() {
    int n;
    printf("Enter Temperature :");
    scanf("%d", &n);

    temp(n);  // Donot Use printf("Temperature is %d", temp(n)); since temp is a void function so it will not return anything to %d.

    return 0;
}

// Function Definition :
void temp(int n){
    if (n > 10) {
        printf("Hot\n");
    }
    else {
        printf("Cold\n");
    }
}