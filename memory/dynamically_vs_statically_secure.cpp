
/*
stack memory : it requires variable size when compile.
heap memory : it does't require variable size when compile.
this is why if you want to secure memory dynamically, you need to secure it in heap.

eg. std::vector secure memory dynamically so it exists in heap.
    but you don't need to manipulate memory by hands.
*/


#include <iostream>
#include <cstdlib>
#define LENGTH 10

int main(int argc, char* argv[]){
    if (argc < 2){
        std::cout << "need argument" << std::endl;
        return -1;
    }

    // dynamically secured memory
    // int n_dynamic = std::atoi(argv[1]);
    int n_dynamic = argc;
    double *array_dynamic = new double[n_dynamic];  // secure memory dynamically in heap
    // array_dynamic size is not defined when compiling
    // so it needs to dynamically secure in heap meory.
    for(int i=0; i<n_dynamic; ++i){
        *(array_dynamic + i) = 0.;
        std::cout << *(array_dynamic + i) << " ";
    }
    std::cout << std::endl;
    delete[] array_dynamic;


    // statically secured meory
    int n_static = LENGTH;
    // int n_static = argc;    // error if using old compiler.
    double array_static[n_static];  // secure memory statically in stack
    // array_staitc size is already defined when compiling
    // (stack memory cannot be secured when run-time)
    for(int i=0; i<n_static; ++i){
        *(array_static + i) = 0.;
        std::cout << *(array_static + i) << " ";
    }
    std::cout << std::endl;



    return 0;
}

