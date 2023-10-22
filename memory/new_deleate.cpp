

/*
stack memory and heap memory exist.
in C, malloc() allocate memory space on heap memory and free() free allocated memory space.
in C++, new operator allocate space on heap memory and deleate operator free it.
*/

#include <iostream>


// raw_ptr
int main(){
    int* ptr = new int(10);
    std::cout << "ptr = " << *ptr << std::endl;
    for(int i=0; i<10; i++){
        *ptr += 1;
    }
    std::cout << "ptr = " << *ptr << std::endl;
    delete ptr; // if forget this sentence, memory-leak occurs.

    int* array_ptr = new int[5];
    for(int i=0; i<5; i++){
        array_ptr[i] = i;
    }

    for(int i=0; i<5; i++){
        std::cout << array_ptr[i] << " ";
    }
    std::cout << std::endl;

    delete[] array_ptr;

    return 0;
}





