// calloc() : intitializes with 0 (suppose we made a memory for 5 integers so 0 or 0.0(in case of float) will be stored in every int block by default)
//            So if we want to allocate memory and assign 0 value to it we can use calloc()
//            calloc() returns void pointer

// Synatx : ptr = (datatype*) calloc(NumberOfLocation, sizePerLocation)
//             Example : ptr = (int*) calloc(5, sizeof(int));


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) calloc(5 , sizeof(int));  // This memory is allocated on the run time and not on the compile time.

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for(int i=0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }

    int *ptr_;
    ptr_ = (int*) calloc(5 , sizeof(int));

    for(int i=0; i<5; i++) {
        printf("%d\n", ptr_[i]);
    }  // Since No value is assigned to ptr_ it will print 0
    // NOTE : calloc() surely assigns 0 to empty ptr_
    return 0;

}

