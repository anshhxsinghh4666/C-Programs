// POINTER ARITHMATIC : -> Pointer can be incremented & decremented.
//                      -> We can also substract one pointer from another.
//                      -> We can also compare 2 pointers.



#include <stdio.h>

int main() {

    // Increment & Decrement : 

    // Case 1 : Increment & Decrement according to int datatype size (int datatype size is 4 bytes)  
    int age = 22;  // int datatype take 4 bytes memory
    int *ptr = &age;
    printf("ptr = %u\n", ptr);  // Output : ptr = 1839493932
    ptr++;  // ptr = ptr + 1 datatype  i.e  ptr + int  i.e  ptr + 4
    printf("ptr = %u\n", ptr);  // Output : ptr = 1839493936 -> Value of ptr increased by 4 bytes. 
    ptr--;  // ptr = ptr - 1 datatype  i.e  ptr - int  i.e  ptr - 4 
    printf("ptr = %u\n", ptr);  // Output : ptr = 1872950060 -> Value of ptr decreased by 4 bytes. 
    
    // Case 2 : Increment & Decrement according to float dataype size (float datatype size is 4)
    float price = 20.00;  // float datatype takes 4 bytes memory
    float *qtr = &price;
    printf("qtr = %u\n", qtr);  // Output : qtr = 1875194652
    qtr++;  // qtr = qtr + 1 datatype  i.e  qtr + float  i.e  qtr + 4
    printf("qtr = %u\n", qtr);  // Output : qtr = 1875194656 -> Value of qtr increased by 4 bytes.
    qtr--;  // qtr = qtr - 1 datatype  i.e  qtr - int  i.e  qtr - 4 
    printf("qtr = %u\n", qtr);  // Output : qtr = 1875194652 -> Value of qtr decreased by 4 bytes.

    // Case 3 : Increment & Decrement according to char datatype size (char datatype size is 1 bytes)
    char star = '*';  // char datatype take 1 byte memory
    char *str = &star;
    printf("str = %u\n", str);  // Output : str = 1839117071
    str++;  // qtr = qtr + 1 datatype  i.e  qtr + float  i.e  qtr + 4
    printf("str = %u\n", str);  // Output : str = 1839117072 -> Value of str increased by 1 byte.
    str--;  // qtr = qtr - 1 datatype  i.e  qtr - int  i.e  qtr - 4 
    printf("str = %u\n", str);  // Output : str = 1839117071 -> Value of str decreased by 1 byte.
    

    // Comparision of 2 Pointers :

    int marks = 98;
    int _marks = 99;
    int *mtr = &marks;
    int *_mtr = &_marks;
    int *__mtr = &marks;
    printf("Comparison = %u\n", mtr==_mtr);  // Output : 0 i.e. False -> Because both pointers have different variable address.
    printf("Comparison = %u\n", mtr==__mtr);  // Output : 1 i.e. True -> Because both pointers have same variable address.


    // Substration of 2 Pointers : The difference is showed in terms of number of datatypes.
    //                             So if there is a difference of 4 bytes so it will show difference = 1 in terms of int (size of int is 4)

    // NOTE : Always substract pointers with same datatype i.e. we can substract int from int, float from float etc but NOT int from char or char from float.
    
    int nehal = 19;
    int _nehal = 18;
    int *ntr = &nehal;
    int *_ntr = &nehal;
    int *__ntr = &_nehal;
    printf("ntr = %u , _ntr = %u , Substraction = %u\n", ntr, _ntr, ntr-_ntr); 
    // Output : ntr = 1840575196 , _ntr = 1840575196 , Substraction = 0  -> Because same address is stored in ntr & _ntr. 
    printf("ntr = %u , __ntr = %u , Substraction = %u\n", ntr, __ntr, ntr-__ntr);  
    // Output : ntr = 1840575196 , __ntr = 1840575192 , Substraction = 1  -> Because there is difference of 4 which equals to 1 int datatype (size of int is 4)

    return 0;
}