/*
If you use "call by pointer", you should do "null check".
If the argument of twice_1() is NULL, the indirection(*) of this address will cause un-defined behibior.
In the worst case, The computer is destroyed and the program don't run properly at leaset. 
*/

#include <iostream>


void twice_1( int* a );
bool twice_2( int* a );


int main(){
    twice_2( nullptr );
    int v = 16;
    std::cout << v << std::endl;
    twice_2( &v );
    std::cout << v << std::endl;
}


void twice_1( int* a){    // pointer variable
    std::cout << *a << std::endl;
    *a *= 2;
    std::cout << *a << std::endl;
}


bool twice_2( int* a ){
    if( a == nullptr ){
        std::cout << "null" << std::endl;
        return true;
    }
    std::cout << *a << std::endl;
    *a *= 2;
    std::cout << *a << std::endl;
    return false;
}




