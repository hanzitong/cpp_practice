

#include <iostream>

class Color{
private:
    unsigned int r;
    unsigned int g;
    unsigned int b;
    int* pointer = new int; // secure(get) heap memory and return its address
public:
    Color(){
        // constructor empty argument
        std::cout << "call constructor 1" << std::endl;
        r = g = b = 0;
    }
    Color(unsigned int n){
        // constructor overload
        std::cout << "call constructor 2" << std::endl;
        r = g = b = n;
    }
    Color(unsigned int r0, unsigned int g0, unsigned int b0){
        // constructor overload
        std::cout << "call constructor 3" << std::endl;
        r = r0;
        g = g0;
        b = b0;
    }
    ~Color(){   // cannot set argument
        // destructor (cannot overload)
        std::cout << "call destructor" << std::endl;
        if(pointer != NULL){
            delete(pointer);
        }
    }
};

int main(int argc, char **argv){
    std::cout << "program start" << std::endl;
    Color * pcolor1 = new Color;
    std::cout << "declared object" << std::endl;
    delete pcolor1;
    std::cout << "deleted object" << std::endl;


    return 0;
}

