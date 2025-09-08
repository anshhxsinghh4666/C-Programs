// WAP to print all the letters in English alphabet using a pointer.


#include <stdio.h>

void main()
{
    int i,j;
    char a[26]="abcdefghijklmnopqrstuvwxyz", b[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p;
    char *q;
    p=&a;
    q=&b;
    for(i=0,j=0;i<26,j<26;i++,j++)
    {
        printf("\n%c",*p);
        printf("\n%c",*q);
        p++;
        q++;
    }
}
