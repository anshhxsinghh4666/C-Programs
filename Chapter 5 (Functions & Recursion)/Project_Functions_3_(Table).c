// WAF to print table of a number n 


#include <stdio.h>

// Function Declaration :
void table(int n);

// Function Call :
int main() {
    int n; 
    printf("Enter the number n:");
    scanf("%d", &n);
    
    table(n);  //arguments / actual parameter  (We get the value of n from the calling function)

    return 0;
}

// Function Definition :
void table(int n) {  //parameter / formal parameter
    for(int i=1; i<=10; i++){
        printf("%d\n", i*n);
    }
}

