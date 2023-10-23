/*
practiceing call by reference 2nd file.
practice function arguments like .. x[], y[]
*/


#include <iostream>
#include <boost/math/special_functions.hpp>


int func(int x[], int* y){
    // x[]: a pointer pointing array
    // *y:  a pointer
    if( x == nullptr || y == nullptr){
        std::cout << "nullptr" << std::endl;
        return false;   // false evaluate 0
    }

    std::cout << x << std::endl;    // address of x[0]
    std::cout << y << std::endl;    // address of y[0]
    std::cout << *x << std::endl;   // value of x[0]
    std::cout << *y << std::endl;   // value of y[0]

    x[1] = 100;     // access 2nd element of x pointer(array)
    y[1] = 200;     // access 2nd element of y pointer(array)

    // pointer increment (pointer can increment)
    std::cout << *(x+1) << std::endl;   // access 2nd element of x pointer(array)
    std::cout << *(y+1) << std::endl;   // access 2nd element of y pointer(array)

    return true;    // true evaluate 1
}

int main(void){
    int array[3] = {1, 2, 3};
    int array2[3] = {1, 2, 3};

    func(array, array2);

    // watch each value of array
    for(int i = 0; i<3; i++){
        std::cout << i << ": " << array[i] << ", " << array2[i] << std::endl;
    }

    return 0;
}





