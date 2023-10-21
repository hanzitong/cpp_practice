/*
practiceing call by reference 2nd file.
practice function arguments like .. x[], y[]
*/


#include <iostream>
#include <boost/math/special_functions.hpp>



int func(int x[], int* y){
    if( x == nullptr || y == nullptr){
        std::cout << "nullptr" << std::endl;
        return false;
    }

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    x[1] = 100;
    y[1] = 200;
    std::cout << *x << std::endl;
    std::cout << *y << std::endl;

    std::cout << *(x+1) << std::endl;
    std::cout << *(y+1) << std::endl;

    return true;
}

int main(void){
    int array[3] = {1, 2, 3};
    int array2[3] = {1, 2, 3};

    func(array, array2);

    for(int i = 0; i<3; i++){
        std::cout << array[i] << ";" << array2[i] << std::endl;
    }

    return 0;
}





