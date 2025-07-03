// a
// a  b 
// a  b  c  
// a  b  c  d


#include <stdio.h>

int main(){
    for(int i = 1; i <=4; i++){
        char ch = 'a';
        for(int j = 1; j<=i; j++){
            printf("%c  ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}