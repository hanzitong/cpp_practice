

/*
stack memory and heap memory exist.
in C, calloc(), malloc(), etc, allocate memory space on heap memory and free() free allocated memory space.
in C++, new operator allocate space on heap memory and deleate operator free it.
*/

#include <iostream>


int main(){
    // declare using new & initialize
    int* ptr = new int(10);

    // declare using new & assign value
    int* ptr2 = new int;
    *ptr2 = 20;

    // watch value
    for(int i=0; i<10; i++){
        *ptr += 1;
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;

    // free secured memory
    delete ptr; // if forget this sentence, memory-leak occurs.
    delete ptr2;

    // ===============================

    // declare array memory
    int* array_ptr = new int[5];

    // assign value 
    for(int i=0; i<5; i++){
        array_ptr[i] = i;
    }

    // watch value
    for(int i=0; i<5; i++){
        std::cout << array_ptr[i] << " ";
    }
    std::cout << std::endl;

    // free array memory
    delete[] array_ptr;


    return 0;
}





