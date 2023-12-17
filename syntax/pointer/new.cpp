
/*
To confirm the grammer of new operator.
*/

#include <iostream>
#include <memory>



int main(int argc, char* argv[]){
    int a = 10;
    int b = 230;
    // int *c = new a;  // error, cannot give variable name.
    // int *c2 = new &a;    // error, cannot give address.
    int *c = &a;
    int *d = new int(20);   // new <type>(initial_value) . "new" returns address.
    int *e = new int;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "&b: " << &b << std::endl;
    std::cout << "*c: " << *c << std::endl;
    std::cout << "c: " << c << std::endl;   // variable's address
    std::cout << "&c: " << &c << std::endl; // pointer's address 
    std::cout << "d: " << d << std::endl;
    std::cout << "*d: " << *d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "*e: " << *e << std::endl;

    delete d;   // delete <pointer>
    delete e;   // delete <pointer>


    return 0;
}


