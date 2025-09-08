// WAP to find sum of digits of a number.


#include <stdio.h>

int main(){
    int n,r,sum=0;
    printf("Enter N:");
    scanf("%d",&n);

    while (n>0) {
        r = n%10;
        sum += r;
        n = n/10;
    }
    printf("%d\n",sum);
    return 0;
}

