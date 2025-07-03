// WAF named slice, which takes a string & returns a sliced string from index n to m.



#include <stdio.h>
#include <string.h>

// Function Decalaration :
void slicing(char str[100], int n, int m);

// Function Call :
int main() {
    char str[100];
    int n,m;
    printf("Enter a string : ");
    scanf("%s", str);
    printf("Enter Starting Index : ");
    scanf("%d", &n);
    printf("Enter Ending Index : ");
    scanf("%d", &m);

    slicing(str, n, m);  // Call the function with provided string, start index & end index.
    return 0;
} 

// Function Definition :
void slicing(char str[100], int n, int m){  // n & m are valid values
    char slice[100];
    int j=0;
    if(n>=0 && m<strlen(str) && n<=m){
        for(int i=n; i<=m; i++, j++){
        slice[j] = str[i];
    }
    slice[j] = '\0';
    puts(slice);
    }
    else{
        printf("Invalid Indices\n");
    }
}