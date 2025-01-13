/*
It seems no way to pass array as a value to a function.
The only way to pass array to a function is to pass head address of the array.
*/
#include <iostream>



// FAIL to get the number of array elements by sizeof()......why? its the C specification....
void pass_array1(int* array_func, int* sum){   // x*:head address of an array, sum*:variable
    int size_func = sizeof(array_func) / sizeof(array_func[0]);
    std::cout << "size_func:" << size_func << std::endl;
    std::cout << "sizeof(array_func):" << sizeof(array_func) << std::endl;
    std::cout << "sizeof(array_func[0]):" << sizeof(array_func[0]) << std::endl;
}



int main(void){
    int i = 0;
    int array[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "size:" << size << std::endl;
    std::cout << "sizeof(array):" << sizeof(array) << std::endl;
    std::cout << "sizeof(array[0]):" << sizeof(array[0]) << std::endl;

    pass_array1(array, &sum);  //pass the head address of array to the function.FAIL.


    return 0;
}



