

#include <iostream>
#include <cmath>



int main(int argc, char **argv){
    int i;

    std::cout << "start program" << std::endl;

    for(i=0; i<argc; i++){
        std::cout << "argc :"  << argc << ", argv[" << i << "]: " << argv[i] << std::endl;
    }    

    return 0;
}












