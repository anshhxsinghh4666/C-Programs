// POINTER : A variable that stores the memory address of another variable.

// Syntax :   int age = 22;
//            int *ptr = &age;  -> Storing address of age
//            int _age = *ptr;  -> storing value stored in address stored in ptr

// NOTE : * -> Value stored at given address or variable.
//        & -> address of given variable

// Declaring Pointers :  int *ptr
//                       char *ptr
//                       float *ptr
// NOTE : Type of pointer depends on which variable you are pointing to. That is if you are pointing at age and it contains int then pointer type should be int.

// Format Specifier :  printf("%p", &age);  -> address of age 
//                     printf("%p", ptr);   -> ptr give address of age
//                     printf("%p", &ptr);  -> Address of pointer
// %p stands for pointer address. So we need to print an address of variable use %p
// Since %p print address in hexadecimal format GENERALLY. So we can use %u (unassigned int) to type cast the value to convert it to simple numbers.
//                     printf("%d", age)  -> Value Stored in age 
//                     printf("%d", *ptr)  -> Value Stored in pointer
//                     printf("%d", *(&age))  -> Value stored at address of age i.e value stored in age

// NOTE : ptr stands for pointer.
// Check Notepad for furthur notes.



#include <stdio.h> 
int main() {
    int age = 22;
    int *ptr = &age;  // Storing address of age
    int _age = *ptr;  // Storing value stored in address stored in ptr i.e it will store the same value as age.
    
    // Printing Value stored in the address stored in pointer :
    printf("%d\n", _age);

    // Printing Address :
    printf("%p\n", &age);  // address of age
    printf("%p\n", ptr);  // ptr give address of age
    printf("%p\n", &ptr);  // Address of pointer 

    // TypeCasting Address using %u :
    printf("%u\n", &age);  // address of age
    printf("%u\n", ptr);  // ptr give address of age
    printf("%u\n", &ptr);  // Address of pointer 
// NOTE : Address of &age and ptr is same i.e. 1863709560

    // Printing Values :
    printf("%d\n", age);  // Value Stored in age 
    printf("%d\n", *ptr);  // Value Stored in pointer
    printf("%d\n", *(&age));  // Value stored at address of age i.e value stored in age


    int x ;
    int *ptr1;
    ptr1 = &x;
    *ptr1 = 0;

    printf("x = %d\n", x);
    printf("*ptr1 = %d\n", *ptr1);

    *ptr1 +=5;
    printf("x = %d\n", x);  // Output: 5
    printf("*ptr1 = %d\n", *ptr1);  // Output: 5

    (*ptr1)++;
    printf("x = %d\n", x);  // Output: 6
    printf("*ptr1 = %d\n", *ptr1);  // Output: 6


    
    return 0;
} 