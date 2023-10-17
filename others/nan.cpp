


#include <iostream>
#include <nlopt.hpp>




int main(int argc, char* argv[]){

    double inf = std::numeric_limits<double>::infinity();
    double testes = std::nan("aaa");
    double tes = testes + 10.3;

    std::cout << tes << std::endl;
    std::cout << inf << std::endl;


    return 0;
}





