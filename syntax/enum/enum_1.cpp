
#include <iostream>
#include <vector>
#include <string>

enum numnum{
    num1,
    num2,
    num3,   
};

typedef enum{
    Poodle,     // 0
    Shiba,      // 1
    Chihuahua,  // 2
    Bulldog,    // 3
}E_dog;


enum class tsts{
    testes1,
    testes2,
};

enum class stst{
    stst1,
    stst2,
};


int main(int argc, char* argv[]){
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    E_dog instance = E_dog::Shiba;
    std::cout << instance << std::endl;

    tsts tsts_instance = tsts::testes1;
    // std::cout << tsts_instance << std::endl;    // error
    std::cout << static_cast<int>(tsts_instance) << std::endl;

    return 0;
}










