// WAP to find sum of digits of a number.


// #include <stdio.h>
// #include <math.h>


// int main(){
//     int n,r,sum=0;
//     printf("Enter N:");
//     scanf("%d",&n);

//     while (n>0) {
//         r = n%10;
//         sum += r;
//         n = n/10;
//     }
//     printf("%d\n",sum);
//     return 0;
// }


// int main() {
//     int power = pow(10,10);
//     printf("Power: %d\n",power);
// }


// int main() {
//     int n=9, r;
//     r = n%10;
//     n = n/10;
//     printf("%d\n", r);
//     printf("%d\n", n);
    
// }



// Swap 2 numbers, a & b i.e. interchange values of a and b.
// 


// void pointer(int *n);

// int main() {
//     int n = 4;
//     printf("%p\n", &n);
//     pointer(&n);
// }

// void pointer(int *n) {
//     printf("%p\n", n);
// }


// Function Declaration :
// void work(int a, int b, int *sum, int *product, int *avg);

// // Function Call :
// int main() {
//     int a = 3 , b = 5;
//     // int sum, product, avg;
    
//     work(a, b);
//     printf("Sum: %d, Product: %d, Average: %d\n", sum, product, avg);
//     return 0;
// }

// // Function Definition :
// void work(int a, int b, int *sum, int *product, int *avg) {
//     *sum = a+b;
//     *product = a*b;
//     *avg = (a+b)/2;
// }


 

//     int _aadhar[5];
//     int *_ptr = &_aadhar[0]; // Pointer points to the first element of the array i.e. at index 0.

//     // Input : 
//     for(int i=0; i<5; i++){
//         printf("index %d :", i);
//         scanf("%d", _aadhar[i]);
//     }

//     // Output : 
//     for(int i=0; i<5; i++){
//         printf("Value at index %d : %d\n", i, _aadhar[i]);
//     }


//     return 0;
    
// }



// int main() {
//     int arr[][2] = {{1,2}, {3,4}};

//     printf("%d", arr[1][1]);
// }



// int main() {
//     double n, fact;
//     printf("Enter Number : ");
//     scanf("%lf", &n);
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     printf("Factorial of %lf is : %lf\n", n, fact);
//     return 0;
// }


// #include <stdio.h>
// void main() {
//     int rows, i , j;
//     printf("Enter the number of rows : ");
//     scanf("%d",&rows);
//     for(i=1; i<=rows; i++){
//         for(j=rows; j>=i; j--){
//             printf("*");
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// void main() {
//     int rows, i , j;
//     printf("Enter the number of rows : ");
//     scanf("%d",&rows);
//     for(i=1; i<=rows; i++){
//         for(j=rows; j>=i; j--){
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }






// #include <stdio.h>

// int main() {
//     int n;
    
//     // Input the number of elements in the set
//     printf("Enter the number of integers: ");
//     scanf("%d", &n);

//     if (n < 2) {
//         printf("There should be at least two numbers to find the second largest.\n");
//         return 0;
//     }

//     int num, largest, secondLargest;

//     // Input the first number and initialize largest and secondLargest
//     printf("Enter the integers:\n");
//     scanf("%d", &largest);
    
//     // Initialize secondLargest to a very low value (smaller than the largest number)
//     scanf("%d", &num);
//     if (num > largest) {
//         secondLargest = largest;
//         largest = num;
//     } else {
//         secondLargest = num;
//     }

//     // Process remaining numbers
//     for (int i = 2; i < n; i++) {
//         scanf("%d", &num);
        
//         // Update largest and secondLargest
//         if (num > largest) {
//             secondLargest = largest;
//             largest = num;
//         } else if (num > secondLargest && num < largest) {
//             secondLargest = num;
//         }
//     }

//     // Check if secondLargest is still uninitialized (it means all numbers are the same)
//     if (secondLargest == largest) {
//         printfq("No second largest number (all numbers may be the same).\n");
//     } else {
//         printf("The second largest number is: %d\n", secondLargest);
//     }

//     return 0;
// }




// reverse 
// swap the number 
// pattern :
// 1
// 3 2
// 5 4 3
// 7 6 5 4 



#include <stdio.h>

int main() {
    int n;
    printf("Enter Year");
    scanf("%d", &n);
    if(n%400==0){
pattern        if()
    
    else if(n%400!=0 && n%100==0){
        printf("Not LEap Year");
    }
    else()
}