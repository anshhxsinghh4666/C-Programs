// malloc() : takes number of bytes to be allocated & returns a pointer of type void 

//  Syntax : ptr = (datatype*) malloc(NumberOfBytes);
//                     Example - ptr = (int*) malloc(5 * sizeof(int)); ~ it will allocate 20 bytes of memory

// NOTE : sizeof(datatype) is a function that returns the size of a datatype.
//        Since malloc() returns and void type pointer. So if we need an integer type of pointer then we can use (int*) to typecast it to int. 
//        If the system is unable to provide the required number of bytes then in that case the value of ptr becomes NULL



#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int));  // This memory is allocated on the run time and not on the compile time.

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    printf("END");

    for(int i=0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }

    
    int *ptr_;
    ptr_ = (int*) malloc(5 * sizeof(int));

    for(int i=0; i<5; i++) {
        printf("%d\n", ptr_[i]);
    }  // Since No value is assigned to ptr_ it will print 0
    // NOTE : Using malloc() function it is not confirm that it will print 0 if no value of assigned to ptr_

    return 0;

}