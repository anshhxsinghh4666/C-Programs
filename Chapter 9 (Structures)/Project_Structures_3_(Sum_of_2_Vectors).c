// Create a structure to store vectors. Then make a function to return sum of 2 vectors.



#include <stdio.h>
#include <string.h>


// Structure Declaration :
typedef struct vectors{
    int x;
    int y;
} vec ;

// Function Decalaration :
void vector(vec v1, vec v2, vec sum);

// Structure Call/Use :
int main() {
    vec v1 = {8, 10};
    vec v2 = {4, 6};

    vec sum  = {0};

    vector(v1, v2, sum);
    return 0;
}

// Structure Definition :
void vector(vec v1, vec v2, vec sum){
    sum.x = v1.x+v2.x;
    sum.y = v1.y+v2.y;

    printf("Sum of X is : %d \n",  sum.x);
    printf("Sum of Y is : %d  ",  sum.y);
}
