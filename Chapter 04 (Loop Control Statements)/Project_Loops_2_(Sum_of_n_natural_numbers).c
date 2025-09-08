// Print the Sum of first n Natural Numbers. Also print them in reverse.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

// While Loop :
    int i = 1, sum1 = 0, j=n;
    while (i <= n) {
        sum1 += i;
        i++;
    }
    while (j > 0) {
        printf("%d\n", j);
        j--;
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum1);
    
// For Loop :
    int sum2 = 0;
    for(int j = 1, k=n; j<=n && k>=0; j++, k--) {
        sum2 += j;
        printf("%d \n", k);
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum2);

// Do While Loop :
    int sum3 = 0;
    int k = 0;
    do {
        sum3 += k;
        k++;
    } while (k <= n);
    int d = n;
    do {
        printf("%d \n", d);
        d--;
    } while (d>0);
    printf("Sum of first %d natural numbers is: %d\n", n, sum3);

    return 0;
}
