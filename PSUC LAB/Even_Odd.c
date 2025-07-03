// Check whether the given number is even of odd


#include <stdio.h>

int main() {
    int num;

    printf("Enter Number  : ");
    scanf("%d", &num);
    if(num%2==0){
        printf("Number is EVEN ");
    }
    else {
        printf("Number is ODD");
    }

    return 0;
}