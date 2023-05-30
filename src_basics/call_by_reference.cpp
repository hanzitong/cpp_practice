/*

*/

#include <iostream>

void twice( int& a);


int main(void){
    int v = 16;
    std::cout << v << std::endl;
    twice( v );
    std::cout << v << std::endl;
}


void twice( int& a ){
    std::cout << a << std::endl;
    a *= 2;
    std::cout << a << std::endl;
}



