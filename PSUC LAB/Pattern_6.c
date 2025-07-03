// a  b  c  d
// a  b  c  
// a  b 
// a


#include <stdio.h>


int main() {
    for(int i = 4; i <= 1; i--) {
        char ch = 'a';
        for(int j = 1; j <= i; j++) {
            printf("%c  ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}