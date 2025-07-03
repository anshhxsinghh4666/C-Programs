#include <stdio.h>
#include <math.h>

int main() {
    int j = 1;
    while(j<=50) {
        if(j%2==0) {
            continue;
        }
    printf("%d\n", j);
    j++;
    }
    printf("While Loop Ended\n");
    
}
