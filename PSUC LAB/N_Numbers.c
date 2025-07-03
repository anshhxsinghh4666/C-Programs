// WAP to print first n numbers. n should be entered by user . Use Loop



#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

// While Loop :
    int i = 0;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
    printf("Loop Ended\n");

// For Loop :
    for (int j = 0; j <= n; j++) {
        printf("%d ", j);
    }
    printf("Loop Ended\n");

    return 0;
}