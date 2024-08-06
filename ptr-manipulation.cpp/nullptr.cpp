
#include <iostream>
#include <vector>
#include <bitset>


int main() {
    int* ptr_CurrentNumber = nullptr;
    double AnotherNumber = 2.3;
    double* ptr_AnotherNumber = &AnotherNumber; 
    std::cout << ptr_CurrentNumber+ 3 << std::endl;
    std::cout << "Here" << std::endl;
    std::bitset<8> bb = static_cast<std::bitset<8>>(&AnotherNumber);    // address : 12
    std::cout << "here" << std::endl;
    std::cout << bb << std::endl;
    std::cout << bb.to_ulong() << std::endl;

    if (nullptr) {
        std::cout << "nullptr is valid here 1" << std::endl;
    }

    if (ptr_AnotherNumber) {
        std::cout << "nullptr is valid here 2" << std::endl;
    }


    return 0;
}
