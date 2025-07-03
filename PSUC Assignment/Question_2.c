// The length of three sides are taken as input. Write a C program to find whether a
// triangle can be formed or not. If not display “This Triangle is NOT possible.” If the
// triangle can be formed then check whether the triangle formed is equilateral,
// isosceles, scalene or a right-angled triangle. (If it is a right-angled triangle then only
// print Right-angle triangle do not print it as Scalene Triangle


#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter Lenght of Side A , B , C :");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a){
        printf("This Triangle is NOT possible");
    }
    else if(a==b||a==c||b==c){
        printf("This Triangle is an ISOSCELES Triangle");
    }
    else if(a==b&&b==c){
        printf("This Triangle is an EQUILATERAL Triangle");
    }
    else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
        printf("Right Angled Triangle");
    }
    else{
        printf("This Triangle is a SCALENE Triangle");
    }
    return 0;
}



