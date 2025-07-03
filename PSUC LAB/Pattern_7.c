// a
// b  c  
// d  e  f
// g  h  i  j


#include <stdio.h>

int main(){
    char ch = 'a';
    for(int i = 1; i <=4; i++){
        for(int j = 1; j<=i; j++){
            printf("%c  ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}