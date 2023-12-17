#include <iostream>



int main(){
    // declare normal variable
    int x = 40;
    // put x address to xPtr
    int* xPtr = &x;

    // watch both address xPtr and x. both point same address.
    std::cout << "x address: " << &x << std::endl;
    std::cout << "xPtr: " << xPtr << std::endl;
    // BUT !!!!!   ptr's address is NOT same. because ptr has it's own address.
    std::cout << "xPtr address: " << &xPtr << std::endl;
        /*  output 
        x address:      0x7ffc7e3ac9d8  // same with xPtr
        xPtr:           0x7ffc7e3ac9d8  // 140722426268120
        xPtr address:   0x7ffc7e3ac9e0  // 140722426268128
        */
    

    return 0;
}


