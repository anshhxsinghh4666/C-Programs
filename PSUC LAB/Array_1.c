// WAP to take 10 values from user, store it in an array. perform insersion at desired location. Take location from user



#include <stdio.h>

int main() {
    int a[11], n, e;
    for(int i=0; i<10; i++){
        printf("Enter Number %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter Location of Insersion : ");
    scanf("%d", &n);
    printf("Enter New Number : ");
    scanf("%d", &e);

    for(int i=n ; i<=10 ; i++){
        a[i+1] = a[i];
    }

    a[n-1] = e;

    for(int i=0; i<=10; i++){
        printf("%d  ", a[i]);
    }
    
    return 0;
}


