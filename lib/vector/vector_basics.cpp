
#include <iostream>
#include <vector>


int main (int argc, char* argv[]) {
    std::vector<int> vec (5, 0);    // initialize with 5 elements & 0 value.

    for (int i=0; i<vec.size(); ++i) {
        std::cout << vec[i] << std::endl;
    }


    return 0;
}



