/*
practice of how to use array as an argument.
practice pointer and + operater to address.
*/

#include <iostream>
#include </usr/include/boost/numeric/ublas/vector.hpp>
#include </usr/include/boost/version.hpp>

using namespace boost::numeric::ublas;


void calc(int arr[], int* num){
    int i = 0;

    std::cout << arr << std::endl;
    std::cout << arr+1 << std::endl;
    std::cout << "---------" << std::endl;

    for(i=0; i<*num; i++){
        std::cout << "array" << i << ": " << arr[i] << ", " << arr+i << std::endl;
    }
}



int main(void){
    vector<double> v(3);
    int arr1[5] = {1, 2, 3, 4, 5};

    int size = sizeof(arr1) / sizeof(arr1[0]);
    calc(arr1, &size);

    return 0;
}


