
#include <iostream>
#include <cstdlib>
#define LENGTH 10

int main(int argc, char* argv[]){
    if (argc < 2){
        std::cout << "need argument" << std::endl;
        return -1;
    }

    int n_static = LENGTH; // for statically secured memory
    int n_dynamic = std::atoi(argv[1]);   // for dynamically secured memory

    double array_static[n_static];    // error or run incorrectly if used for dynamic secure process
    double *array_dynamic = new double[n_dynamic];

    // // statically secured meory
    for(int i=0; i<n_static; ++i){
        *(array_static + i) = 0.;
        std::cout << *(array_static + i) << " ";
    }
    std::cout << std::endl;

    // dynamically secured memory
    for(int i=0; i<n_dynamic; ++i){
        *(array_dynamic + i) = 0.;
        std::cout << *(array_dynamic + i) << " ";
    }
    std::cout << std::endl;

    delete[] array_dynamic;

    return 0;
}

