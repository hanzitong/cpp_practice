
#include <iostream>

#define A 100


#ifdef A
    #define B 50
#else
    #define C 20
#endif


#ifndef B
    #define B 0
#endif

#ifndef C
    #define C 0
#endif


int main(int argc, char* argv[]){
    std::cout << A << std::endl;
    std::cout << B << std::endl;
    std::cout << C << std::endl;


    return 0;
}














